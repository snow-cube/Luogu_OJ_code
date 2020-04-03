#include <iostream>
#include <algorithm>
using namespace std;

int T, M;
int w[105], v[105];
int dp[1005];

int main() {
    cin >> T >> M;
    for (int i = 1; i <= M; i++) {
        cin >> w[i] >> v[i];
    }

    for (int i = 1; i <= M; i++)
        for (int j = T; j >= 1; j--)
            if (w[i] <= j)
                dp[j] = max(dp[j], v[i] + dp[j-w[i]]);

    cout << dp[T] << endl;

    return 0;
}