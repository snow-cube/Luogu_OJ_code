#include <iostream>
using namespace std;
int main() {
    int x;
    long int n, length = 0;   
    cin >> x >> n;

    for (int i = 0; i < n; i++, x++) {
        if (x%7 >= 1 && x%7 <= 5) {
            length += 250;
        }
    }
    cout << length << endl;
    
    return 0;
}