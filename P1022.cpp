#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main() {
    int abs[20] = {0};
    int argu[20] = {0};
    char letter = '\0';
    int dire = 1, dire2 = 1;
    
    char c;
    int num = 0;
    int idx1 = 0, idx2 = 0;
    int last = -1;
    while (cin >> c) {
        //if (c != '\n') printf("\nc: *%c*", c);
        //else printf("\nc: *n*");
        if (c >= 'a' && c <= 'z' && !letter) letter = c;

        if (c == '+' || c == '-' || c == '=' || c == '\n') {
            //printf("\tnum: %d", num);
            if (last == letter) {
                if (num == 0) num = dire * dire2;
                argu[idx2++] = num;
                num = 0;
            } else if (last >= '0' && last <= '9') {
                abs[idx1++] = num;
                num = 0;
            }
        }

        if (c == '-') dire = -1;
        else if (c == '+') dire = 1;
        else if (c == '=') {
            dire2 = -1;
            dire = 1;
        } else if (c >= '0' && c <= '9') num = num*10 + dire * dire2 * (c-'0');
        last = c;
        // if (c == '\n') break;
        // scanf("%c", &c);
    }
    if (letter == '\0') letter = last;
    if (last == letter) {
        if (num == 0) num = dire * dire2;
        argu[idx2++] = num;
        num = 0;
    } else if (last >= '0' && last <= '9') {
        abs[idx1++] = num;
        num = 0;
    }


    int sum1 = 0, sum2 = 0;
    for (int i = 0; abs[i] || argu[i]; i++) {
        //printf("\n%2d: %3d %3d", i, abs[i], argu[i]);
        sum1 += abs[i];
        sum2 += argu[i];
    }
    double result = -(double)sum1/sum2;
    if (!result) result = 0;
    // printf("\nletter: %c\n", letter);
    
    printf("%c=%.3lf\n", letter, result);

    return 0;
}
