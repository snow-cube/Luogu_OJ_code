#include <iostream>
using namespace std;

int main() {
    int K, ans = 0;
    cin >> K;
    
    int N = 1, today = 0;
    while (today < K) {
        for (int i = 0; i < N; i++) {
            ans += N;
            if (++today == K)
                break;
        }
        N++;
    }

    cout << ans << endl;

    return 0;
}