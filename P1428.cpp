#include <iostream>
using namespace std;
int main() {
    int fish[100] = {0};
    int n, count = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> fish[i];
        for (int j = 0; j < i; j++) {
            if (fish[j] < fish[i]) {
                count++;
            }
        }
        cout << count << " ";
        count = 0;
    }
    
    return 0;
}