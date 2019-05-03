#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

int digit(int num, int n) {
    return num / (int)pow(10, n-1) % 10;
}

int main() {
    bool list[10] = {0};
    int a, b, c;
    cin >> a >> b >> c;
    
    int count = 0;
    for (int i = a, j, k; (k = i/a*c) <= 987; i += a) {
        if (i < 123) continue;
        j = i/a*b;
        for (int o = 1; o <= 3; o++) list[digit(i, o)] = 1;
        for (int o = 1; o <= 3; o++) list[digit(j, o)] = 1;
        for (int o = 1; o <= 3; o++) list[digit(k, o)] = 1;

        int p = 1;
        for (p = 1; p <= 9; p++) 
            if (!list[p]) break;
        if (p == 10) {
            cout << i << " " << j << " " << k << endl;
            count++;
        }
        memset(list, 0, sizeof list);
    }

    if (!count) cout << "No!!!" << endl;

    return 0;
}
