#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;
    cout << "Today, I ate " << x << " apple" << (x > 1 ? "s" : "") << "." << endl;

    return 0;
}