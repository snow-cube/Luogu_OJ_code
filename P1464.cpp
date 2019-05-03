#include <iostream>
#include <cstring>
using namespace std;

int table[200][200][200];

int func(int a, int b, int c) {
    if (a <= 0 || b <= 0 || c <= 0) return 1;
    if (a < 200 && b < 200 && c < 200 && table[a][b][c] != 0x3f3f3f3f) return table[a][b][c];
    
    int result = 0;
    if (a > 20 || b > 20 || c > 20) result = func(20, 20, 20);
    else if (a < b && b < c) result = func(a, b, c-1) + func(a, b-1, c-1) - func(a, b-1, c);
    else result = func(a-1, b, c) + func(a-1, b-1, c) + func(a-1, b, c-1) - func(a-1, b-1, c-1);
    
    if (a < 200 && b < 200 && c < 200) table[a][b][c] = result;
    return result;
}

int main() {
    memset(table, 0x3f, sizeof table);    
    
    int a, b, c;
    cin >> a >> b >> c;
    while (a != -1 || b != -1 || c != -1) {
        cout << "w(" << a << ", " << b << ", " << c << ") = " << func(a, b, c) << endl;
        cin >> a >> b >> c;
    }

    return 0;
}
