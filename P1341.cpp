#include <iostream>
using namespace std;
bool g[55][55]; // 图
int degree[55]; // 度数
int set[55];
bool appeared[55];
char ans[1400];
int idx;
// bool used[55];

char ctoi(char l) {
    if (l >= 'A' && l <= 'Z')
        return l - 'A' + 1;
    return l - 'a' + 27;
}

char itoc(char i) {
    if (i <= 26)
        return i + 'A' - 1;
    return i + 'a' - 27;
}

int find(int a) {
    if (set[a] == a)
        return a;
    set[a] = find(set[a]);
    return set[a];
}

void uni(int a, int b) {
    int set_a = find(a);
    int set_b = find(b);
    set[set_b] = set_a;
}

void dfs(int n) {
    for (int i = 1; i <= 52; i++) {
        if (g[n][i]) {
            g[n][i] = g[i][n] = false;
            dfs(i);
        }
    }
    ans[++idx] = itoc(n);
}

int main() {
    // 初始化并查集
    for (int i = 0; i <= 52; i++)
        set[i] = i;

    int n;
    cin >> n;
    int j = 53; // 记录第一个度为奇数的点，保证字典序最小
    for (int i = 0; i < n; i++) {
        char a, b;
        cin >> a >> b;
        int ia = ctoi(a), ib = ctoi(b);
        g[ia][ib] = g[ib][ia] = true;
        degree[ia]++;
        degree[ib]++;
        appeared[ia] = true;
        appeared[ib] = true;
        uni(ia, ib);
        if (ia < j) j = ia;
        if (ib < j) j = ib;
    }

    // 检查图是否联通及统计各点的度
    bool flag = true;
    int cnt =  0; // 度为奇数的点个数
    for (int i = 1; i <= 52; i++) {
        if (!appeared[i])
            continue;
        if (find(i) != find(j)) {
            flag = false;
            break;
        }

        if (degree[i] & 1){
            cnt++;
            if ((degree[j] & 1) == 0)
                j = i;
        }
    }
    
    if (!flag || (cnt != 2 && cnt != 0)) {
        cout << "No Solution" << endl;
    } else {
        // 从j开始深搜，寻找欧拉路径
        dfs(j);
        for (int i = idx; i > 0; i--)
            cout << ans[i];
        cout << endl;
    }

    return 0;
}