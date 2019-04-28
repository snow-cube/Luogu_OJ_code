#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    cout << floor((a + (double)b/10) / 1.9);
    return 0;
}
