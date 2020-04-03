#include <iostream>
#include <algorithm>
using namespace std;

int dp[30005];
int v[30], p[30];

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        cin >> v[i] >> p[i];
        p[i] *= v[i];
    }

    for (int i = 1; i <= m; i++)
        for (int j = n; j > 0; j--)
            if (j >= v[i])
                dp[j] = max(dp[j], p[i] + dp[j-v[i]]);
    
    cout << dp[n] << endl;

    return 0;
}