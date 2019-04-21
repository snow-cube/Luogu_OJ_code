#include <iostream>
#include <cmath>
using namespace std;

int mem[100] = {0};

int find(int last) {
    int count = 1;

    for (int i = 1; i <= last/2; i++) {
        if (i >= 1 && i <= 100) count += mem[i-1];
        else count += find(i);
    }

    return count;
} 

int main() {
    int num = 0;
    int count = 0;
    for (int i = 0; i < 100; i++) {
        mem[i] = find(i+1);
    }

    cin >> num;
    count = find(num);

    cout << count << endl;

    return 0;
}
