#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

vector<int> g[1005];
int cnt[1005];
bool visited[1005];
int cows[105];

void dfs(int a) {
    cnt[a]++;
    visited[a] = true;
    for (int i = 0; i < g[a].size(); i++) {
        if (!visited[g[a][i]])
            dfs(g[a][i]);
    }
}

int main() {
    int K, N, M;
    cin >> K >> N >> M;
    for (int i = 1; i <= K; i++)
        cin >> cows[i];
    for (int i = 1; i <= M; i++) {
        int A, B;
        cin >> A >> B;
        g[A].push_back(B);
    }

    for (int i = 1; i <= K; i++) {
        memset(visited, 0, sizeof(visited));
        dfs(cows[i]);
    }

    int ans = 0;
    for (int i = 1; i <= N; i++) {
        if (cnt[i] == K)
            ans++;
    }
    cout << ans << endl;

    return 0;
}
