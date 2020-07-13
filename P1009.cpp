#include <iostream>
using namespace std;

int S[200];
int item[200];

void pplus(int a[], int b[]) {
    int r = 0;
    for (int i = 1; i < 200; i++) {
        a[i] += b[i] + r;
        r = a[i] / 10;
        a[i] %= 10;
    }
}

void multi(int a[], int n) {
    int r = 0;
    for (int i = 1; i < 200; i++) {
        a[i] = a[i] * n + r;
        r = a[i] / 10;
        a[i] %= 10;
    }
}

int main() {
    int N;
    cin >> N;
    item[1] = 1;
    for (int i = 1; i <= N; i++) {
        multi(item, i);
        pplus(S, item);
    }
    
    int idx = 200;
    while (!S[--idx]);
    for (int i = idx; i > 0; i--)
        cout << S[i];
    cout << endl;

    return 0;
}