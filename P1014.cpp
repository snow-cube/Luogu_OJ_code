#include <iostream>
using namespace std;
int main() {
    int x = 1, y = 1;
    bool dire = 1; // direction 1: up; 0: down; 
    int N;
    cin >> N;

    for (int i = 1; i < N; i++) {
        if (y == 1 && dire == 1) {
            x++;
            dire = 0;
        } else if (x == 1 && dire == 0) {
            y++;
            dire = 1;
        } else {
            if (dire) {
                y--;
                x++;
            } else {
                y++;
                x--;
            }
        }
    }

    cout << y << "/" << x << endl;

    return 0;
}
