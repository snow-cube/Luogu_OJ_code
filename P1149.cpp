#include <iostream>
#include <cstdio>
using namespace std;

int table[10] =  {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};

// num of a number
int trans(int num) {
    if (num / 100) {
        return table[num/100] + table[num/10%10] + table[num%10];
    } else if (num / 10) {
        return table[num/10] + table[num%10];
    } else {
        return table[num];
    }
}

int main() {
    int n = 0;
    cin >> n;
    n -= 4;
    int count = 0;

    int a = 0, b = 0;
    for (int i = 0; i <= 999; i++) {
        // printf("\nsum: %d", i);
        for (a = 0, b = i; a <= i; a++, b--) {
            // printf("\na: %d # b: %d\t", a, b);
            if (trans(a) + trans(b) + trans(i) == n) {
                count++;
                // cout << "yes";
            }
        }
    }

    cout << count << endl;

    return 0;
}
