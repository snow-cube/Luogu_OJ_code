#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

bool is_prime(int num) {
    for (int i = 2; i <= sqrt(num); i++) {
        if (!(num % i)) return false;
    }
    return true;
}

/*
int main() {
    int table[3000] = {0};
    memset(table, 0x3f, sizeof table);
    table[0] = 2;
    for (int i = 3, idx = 1; i <= 20000; i += 2) {
        if (is_prime(i)) table[idx++] = i;
    }
    // for (int i = 0; i < 3000; i++) cout << table[i] << endl;
    
    int n;
    cin >> n;
    int rest1, rest2;
    bool flag = 1;
    for (int i = 0; i < 1000 && flag; i++) {
        rest1 = n - table[i];
        for (int j = i; j < 1000 && flag; j++) {
            rest2 = rest1 - table[j];
            for (int k = j; k < 1000 && flag; k++) {
                // cout << i << " " << j << " " <<  k << endl;
                if (table[k] == rest2) {
                    cout << table[i] << " " << table[j] << " " << table[k] << endl;
                    flag = 0;
                }
            }
        }
    }

    return 0;
}
*/

int main() {
    int n;
    cin >> n;

    if (is_prime(n-4)) cout << "2 2 " << n - 4 << endl;
    else {
        n -= 3;
        for (int i = 3; i < 20000; i++) {
            if (!is_prime(i)) continue;
            int rest = n - i;
            if (is_prime(rest)) {
                cout << "3 " << i << " " << rest << endl;
                break;
            }
        } 
    }
    
    return 0;
}
