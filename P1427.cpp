#include <iostream>
using namespace std;
int main() {
    int num[100] = {0};
    int i = 0;
    for (i = 0; i < 100; i++) {
        cin >> num[i];
        if (!num[i]) {
            break;
        }
    }
    
    for (int j = i - 1; j >= 0; j--) {
        cout << num[j] << " ";
    }
    
    return 0;
}