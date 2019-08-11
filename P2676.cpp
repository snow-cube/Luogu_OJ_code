#include <iostream>
#include <algorithm>
using namespace std;

int H[20004];

int main() {
    int N, B;
    cin >> N >> B;
    for (int i = 0; i < N; i++)
        cin >> H[i];
    
    sort(H, H+N, greater<int>());

    int total = 0, i = 0;
    for (i = 0; total < B; i++) {
        total += H[i];
    }

    cout << i << endl;

    return 0;
}
