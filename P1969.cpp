#include <iostream>
using namespace std;

int depth[100005];

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> depth[i];
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (depth[i] > depth[i+1])
            ans += depth[i] - depth[i+1];
    }

    cout << ans << endl;

    return 0;
}