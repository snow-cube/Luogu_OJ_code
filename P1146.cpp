#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    unsigned long long k = (1ll << N) - 1;

    cout << N << endl;
    unsigned long long result = 0, code = 1ll << (N-1);
    for (int i = 0; i < N; i++) {
        result ^= code;
        result ^= k;
        code >>= 1;

        // cout << result << endl;  
        unsigned long long o = result;
        for (int j = 0; j < N; j++) {
            cout << ((o & (1ll<<(N-1))) >> (N-1));
            o <<= 1;
        }
        cout << endl;
    }

    return 0;
}