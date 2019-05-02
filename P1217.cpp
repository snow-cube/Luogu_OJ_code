#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
using namespace std;

int a, b;

bool is_prime(int num) {
    for (int i = 2; i <= (int)sqrt(num); i++) {
        if (!(num % i)) return false;
    }
    return true;
}

int trans(int *num, bool flag) {
    // cout << endl;
    // for (int i = 0; i < 4; i++) cout << num[i] << " ";
    int palindrome = 0;
    if (flag) {
        palindrome = num[0]*1000001 + num[1]*100010 + num[2]*10100 + num[3]*1000;
    } else {
        palindrome = num[0]*10000001 + num[1]*1000010 + num[2]*100100 + num[3]*11000;       
    }

    int i = -1;
    while (!num[++i]) continue;
    palindrome /= pow(10, i);

    return palindrome;
}

int ready[10] = {0};
int idx = 0;
void find_pal(int bit, int *num) {
    if (!bit) {
        int palindrome;
        palindrome = trans(num, 1);
        if (palindrome >= a && palindrome <= b && is_prime(palindrome)) cout << palindrome << endl;
        
        palindrome = trans(num, 0);
        if (palindrome >= a && palindrome <= b && is_prime(palindrome)) ready[idx++] = palindrome; 
    } else {
        for (int i = 0; i <= 9; (bit == 4 && i != 0) ? i+=2 : i++) {
            num[4-bit] = i;
            find_pal(bit-1, num);
            num[4-bit] = 0;
        }
        for (int i = 0; i < idx; i++) cout << ready[i] << endl;
        memset(ready, 0, sizeof ready);
        idx = 0;
    }
}

int main() {
    cin >> a >> b;
    // int a_bit = floor(log10(a)+1);
    // int b_bit = floor(log10(b)+1);
    
    int num[4] = {0};
    // int palindrome = 0;

    find_pal(4, num);
    /*
    for (int i = 0; i < ceil(floor(log10(b)+1)/2.0); i++) {
        for (num[i] = 0; num[i] <= 9; i==ceil(floor(log10(b)+1)/2.0)-1?num[i]+=2:num[i]++) {
            palindrome = num[3]*10000001 + num[2]*1000010 + num[1] * 100100 + num[0] * 11000;
            cout << palindrome << endl;
            if (palindrome >= a && palindrome <= b && is_prime(palindrome)) cout << palindrome << endl;
            palindrome = num[3]*1000001 + num[2]*100010 + num[1]*10100 + num[0]*1000;
            cout << palindrome << endl;
            if (palindrome >= a && palindrome <= b && is_prime(palindrome)) cout << palindrome << endl;
        }
    }
    */

    return 0;
}
