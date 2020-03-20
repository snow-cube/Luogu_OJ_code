#include <iostream>
#include <vector>
using namespace std;

vector<int> g[100005];
int A[100005];

void dfs(int a, int M) {
    A[a] = M;
    for (int i = 0; i < g[a].size(); i++) {
        if (!A[g[a][i]])
            dfs(g[a][i], M);
    }
}

int main() {
    int N, M;
    cin >> N >> M;
    for (int i = 0; i < M; i++) {
        int U, V;
        cin >> U >> V;
        g[V].push_back(U);
    }

    for (int i = N; i >= 1; i--) {
        if (!A[i])
            dfs(i, i);
    }

    for (int i = 1; i <= N; i++)
        cout << A[i] << " ";
    cout <<  endl;

    return 0;
}