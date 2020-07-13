#include <iostream>
using namespace std;

int main() {
    int cnt = 0, ans = 0, n, a1, a2;
    cin >> n;
    
    while (n--) {
        if (!cnt) {
            cin >> a1;
            cnt++;
        } else {
            cin >> a2;
            if (a2 == a1 + 1) {
                cnt++;
            } else {
                cnt = 1;
            }
            if (cnt > ans)
                ans = cnt;
            a1 = a2;
        }
    }

    cout << ans << endl;

    return 0;
}