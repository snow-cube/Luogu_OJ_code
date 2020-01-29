#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int n, r;
    cin >> n >> r;

    int max = (1 << n) - 1;
    for (int i = max; i >= 0; i--) {
        int num = i, cnt = 0;
        for (int j = 0; j < n; j++) {
            if (num & 1)
                cnt++;
            num >>= 1;
        }

        num = i;
        if (cnt == r) {
            for (int j = 1; j <= n; j++) {
                if (num & (1 << (n-1)))
                    printf("%3d", j);
                num <<= 1;
            }
            puts("");
        }
    }

    return 0;
}