#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;
    bool b1 = !(x % 2), b2 = (x > 4 && x <= 12);
    bool a1 = b1 && b2, a2 = b1 || b2;

    cout << a1 << " " << a2 << " " << (a2 && !a1) << " " << !a2 << endl;

    return 0;
}