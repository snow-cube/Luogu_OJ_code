#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int main() {
    // int a, b;
    // cin >> a >> b;
    // cout << floor((a + (double)b/10) / 1.9);
    int a, b, c, d;
    int minu;
    cin >> a >> b >> c >> d;
    minu = ((c - a - 1)*60 + 60 - b + d);
    cout <<  minu / 60 << " " << minu % 60;
    
    return 0;
}
