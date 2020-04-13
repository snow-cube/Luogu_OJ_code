#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;
const double PI = 3.141593;
int main() {
    int n;
    scanf("%d", &n);
    switch (n) {
        case 1:
            printf("I love Luogu!\n");
            break;
        case 2:
            printf("6 4\n");
            break;
        case 3:
            printf("3\n12\n2\n");
            break;
        case 4:
            printf("%.3f\n", 500.0 / 3);
            break;
        case 5:
            printf("15\n");
            break;
        case 6:
            cout << (sqrt(117)) << endl;
            break;
        case 7:
            printf("110\n90\n0\n");
            break;
        case 8:
            cout << 10 * PI << endl << 25 * PI << endl << 500 / 3.0 * PI << endl;
            break;
        case 9:
            printf("22\n");
            break;
        case 10:
            printf("9\n");
            break;
        case 11:
            cout << (100 / 3.0) << endl;
            break;
        case 12:
            printf("13\nR\n");
            break;
        case 13:
            printf("%d\n", (int)pow(256/3.0*PI + 4000/3.0*PI, 1/3.0));
            break;
        case 14:
            printf("50\n");
            break;
    }

    return 0;
}