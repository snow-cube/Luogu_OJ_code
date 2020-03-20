#include <iostream>
#include <algorithm>
using namespace std;

int height[105];
int a[105], b[105];
int N;

void getL() {
    for (int i = 1; i <= N; i++) {
        for (int j = 0; j < i; j++) {
            if (height[j] < height[i])
                a[i] = max(a[i], 1+a[j]);
        }
    }
}

void getR() {
    for (int i = N; i >= 1; i--) {
        for (int j = i+1; j <= N+1; j++) {
            if (height[j] < height[i])
                b[i] = max(b[i], 1+b[j]);
        }
    }
}

int main() {
    cin >> N;
    for (int i = 1; i <= N; i++)
        cin >> height[i];

    getL();
    getR();

    int ans = 10000; // INF
    for (int i = 1; i <= N; i++) {
        int l = a[i] + b[i] - 1;
        ans = min(ans, N - l);
    }

    cout << ans << endl;

    return 0;
}