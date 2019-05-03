#include <iostream>
#include <cmath>
using namespace std;

int trans(int num) {
    int new_num = 0;
    int total = log10(num) + 1;
    for (int i = 1; num > 0; i++, num /= 10) {
        new_num += (num % 10) * (int)pow(10, total-i);
    }
    return new_num;
}

int main() {
    int N;
    cin >> N;
    
    if (N >= 0) cout << trans(N) << endl;
    else cout << "-" << trans(-N) << endl;

    return 0;
}
