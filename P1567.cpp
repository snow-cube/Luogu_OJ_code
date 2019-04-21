#include <iostream>
using namespace std;
int main() {
    int count = 0, max_count = 0,  max = 0, temp;
    // int temp[1000000] = {0};
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
       // cin >> temp[i];
        cin >> temp;
        if (temp > max) {
            count++;
        } else {
            if (count > max_count) {
                max_count = count;
            }
            count = 1;
        }
        max = temp;
    }
    cout << (max_count > count ? max_count : count) << endl;
    
    return 0;
}
