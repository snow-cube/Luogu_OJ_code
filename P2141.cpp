#include <iostream>
using namespace std;
int main() {
    int num[100] = {0};
    int times[100] = {0};
    int n, count = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = 0; k < n; k++) {
                if (k != i && k != j && num[i] + num[j] == num[k] && times[k] == 0) {
                    count++;
                    times[k]++;
                }
            }
        }
    }
    cout << count << endl;

    return 0;
}