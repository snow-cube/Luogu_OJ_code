#include <iostream>
using namespace std;

int month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

bool is_leap(int n) {
    return !(n % 4) && n % 100 || !(n % 400);
}

int main() {
    int y, m;
    cin >> y >> m;
    if (m == 2 && is_leap(y))
        cout << 29 << endl;
    else
        cout << month[m] << endl;

    return 0;
}