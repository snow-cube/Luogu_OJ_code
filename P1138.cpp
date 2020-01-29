#include <iostream>
using namespace std;

short bucket[30005];

int main() {
    int n, k, t;
    cin >> n >> k;
    while (n--) {
        cin >> t;
        bucket[t]++;
    }

    int cnt = 0;
    for (int i = 0; i < 30005; i++) {
        if (bucket[i]) cnt++;

        if (cnt == k) {
            cout << i << endl;
            break;
        }
    }

    if (cnt != k)
        cout << "NO RESULT" << endl;

    return 0;
}