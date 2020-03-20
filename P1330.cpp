#include <iostream>
#include <vector>
using namespace std;

const int INF = 20000;
vector<int> g[10005];
int flag[10005]; // 1 for yes, -1 for no
int cnt[2];

void dfs(int n, int a) {
    if (flag[n] && flag[n] != a)
        cnt[0] = cnt[1] = INF;
    else if (!flag[n]) {
        flag[n] = a;
        if (a == 1)
            cnt[0]++;
        else
            cnt[1]++;
        for (int i = 0; i < g[n].size(); i++) {
            dfs(g[n][i], -a);
        }
    }
}

void work(int n) {
    cnt[0] = cnt[1] = 0;
    dfs(n, 1);
}

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    int ans = 0;
    for (int i = 1; i <= n; i++) {
        if (flag[i])
            continue;
        work(i);
        ans += min(cnt[0], cnt[1]);
    }
    if (ans < INF)
        cout << ans << endl;
    else
        cout << "Impossible" << endl;
    

    return 0;
}