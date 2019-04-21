#include <iostream>
using namespace std;
int main() {
    double goal, length = 2, step_len = 2;
    int steps = 1;
    cin >> goal;

    while (length < goal) {
        step_len *= 0.98;
        length += step_len;
        steps++;
    }
    cout << steps;
    
    return 0;
}