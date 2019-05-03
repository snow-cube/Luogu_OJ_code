#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    double s, x;
    cin >> s >> x;
    double t, l, step; // time, length
    for (t = 0, l = 0, step = 7; l < s - x; t++, step *= 0.98, l += step);
        // printf("t: %f l: %f step: %f\n", t, l, step);
    t++;
    // cout << "end t: " << t << endl;
    if ((l += step*0.98) < s + x) cout << "y" << endl;
    else cout << "n" << endl;

    return 0;
}
