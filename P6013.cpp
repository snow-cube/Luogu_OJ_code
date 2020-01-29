#include <iostream>
using namespace std;

unsigned long long locked[1000005];

int main() {
    unsigned long long m, rest = 0, cnt = 0;
    cin >> m;
    for (int i = 1; i <= m; i++) {
        rest += locked[i];
        int t;
        cin >> t;
        if (t == 1) {
            unsigned long long a;
            cin >> a;
            rest += a;
        } else if (t == 2) {
            unsigned long long a;
            cin >> a;
            if (a > rest)
                cnt++;
            else
                rest -= a;
        } else if (t == 3) {
            unsigned long long a, b;
            cin >> a >> b;
            rest -= a;
            locked[b] += a;
        }
    }

    cout << cnt << endl;

    return 0;
}