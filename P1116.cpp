#include <iostream>
using namespace std;

int a[10005];

int main() {
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
        cin >> a[i];
    
    int cnt = 0;
    for (int i = 0; i < N - 1; i++)
        for (int j = 0; j < N - i - 1; j++)
            if (a[j] > a[j+1]) {
                swap(a[j], a[j+1]);
                cnt++;
            }
    
    cout << cnt << endl;

    return 0;
}