#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int main() {
    int money, left = 0, save = 0, left_before_save = 0;
    for (int i = 0; i < 12; i++) {
        cin >> money;
        left_before_save = 300 + left - money;
        if (left_before_save >= 0) {
            save += left_before_save / 100 * 120;
            left = left_before_save % 100;
        } else {
            left = 0;
            save = -(i+1);
            break;
        }
    }

    cout << left + save;

    return 0;
}