#include <iostream>
using namespace std;
int main() {
    int height[10] = {0};
    int height_max, count = 0;
    for (int i = 0; i < 10; i++) {
        cin >> height[i];
    }
    cin >> height_max;
    for (int i = 0; i < 10; i++) {
        if (height_max + 30 >= height[i]) {
            count++;
        }
    }
    cout << count << endl;
}