#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n[3];
    cin >> n[0] >> n[1] >> n[2];
    sort(n, n+3);

    if (n[0] + n[1] <= n[2])
        cout << "Not triangle" << endl;
    else {
        if (n[0]*n[0] + n[1]*n[1] == n[2]*n[2])
            cout << "Right triangle" << endl;
        else if (n[0]*n[0] + n[1]*n[1] > n[2]*n[2])
            cout << "Acute triangle" << endl;
        else
            cout << "Obtuse triangle" << endl;

        if (n[0] == n[1] || n[1] == n[2])
            cout << "Isosceles triangle" << endl;
        if (n[0] == n[2])
            cout << "Equilateral triangle" << endl;
    }

    return 0;
}