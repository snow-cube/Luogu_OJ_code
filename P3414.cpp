#include <iostream>
using namespace std;

const int M = 6662333;

unsigned long long pow(unsigned long long p) {
    if (p == 1)
        return 2;
    unsigned long long half = pow(p/2);
    unsigned long long result = half * half;
    if (p % 2)
        result *= 2;
    return result % M;
}

int main() {
    unsigned long long n;
    cin >> n;
    cout << pow(n-1) << endl;

    return 0;
}