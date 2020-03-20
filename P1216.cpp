#include <iostream>
using namespace std;

int arr[1005][1005];

int main() {
    int r;
    cin >> r;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j <= i; j++) {
            int n;
            cin >> n;
            arr[i][j] = n + max(arr[i-1][j-1], arr[i-1][j]);
        }
    }

    int ans = 0;
    for (int i = 0; i < r; i++) {
        if (arr[r-1][i] > ans)
            ans = arr[r-1][i];
    }
    cout << ans << endl;

    return 0;
}