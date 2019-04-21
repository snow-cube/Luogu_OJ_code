#include <iostream>
using namespace std;
int main() {
    int n, x, point = 10, num = 0, last = 0, count = 0;
    cin >> n >> x;
    for (int i = 1; i <= n; i++) {
        point = 10;
        last = 0;
        while (1) {
            num = (i % point - last) / (point / 10);
            last = i % point;
            point *= 10;
            if (num == x) {
                count++;
            } 
            if (last == i) {
                break;
            }  
        }
    }
    cout << count << endl;
    
    return 0;
}