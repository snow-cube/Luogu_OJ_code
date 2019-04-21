#include <iostream>
using namespace std;
int main() {
    int K, n = 1;
    double sum = 1;
    cin >> K;

    while (sum <= K) {
        sum += 1.0/++n;
    }

    cout << n;

    return 0;
}