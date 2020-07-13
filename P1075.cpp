#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n % 2 == 0) {
        cout << (n / 2) << endl;
    } else {
        for (int i = 3; i <= n; i += 2) {
            if (n % i == 0) {
                cout << (n / i) << endl;
                break;
            }
        }
    }

    return 0;
}