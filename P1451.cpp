#include <iostream>
#include <algorithm>
using namespace std;

int N, map[360];
int cards[5];
int dp[45][45][45][45];

int work(int a, int b, int c, int d) {
    if (a == cards[1] && b == cards[2] && c == cards[3] && d == cards[4])
        return map[N];
    if (dp[a][b][c][d])
        return dp[a][b][c][d];

    int pos = 1 + a + b*2 + c*3 + d*4;
    if (a < cards[1]) dp[a][b][c][d] = max(dp[a][b][c][d], map[pos] + work(a+1, b, c, d));
    if (b < cards[2]) dp[a][b][c][d] = max(dp[a][b][c][d], map[pos] + work(a, b+1, c, d));
    if (c < cards[3]) dp[a][b][c][d] = max(dp[a][b][c][d], map[pos] + work(a, b, c+1, d));
    if (d < cards[4]) dp[a][b][c][d] = max(dp[a][b][c][d], map[pos] + work(a, b, c, d+1));

    return dp[a][b][c][d];
}

int main() {
    int M;
    cin >> N >> M;
    for (int i = 1; i <= N; i++)
        cin >> map[i];
    for (int i = 1; i <= M; i++) {
        int num;
        cin >> num;
        cards[num]++;
    }

    cout << work(0, 0, 0, 0) << endl;

    return 0;
}