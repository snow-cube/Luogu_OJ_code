#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int main() {
    int total;
    float prize = 0;
    cin >> total;
    if (total <= 150) {
        prize = total * 0.4463;
    } else if (total <= 400) {
        prize = 150 * 0.4463 + (total - 150) * 0.4663;
    } else {
        prize = 150 * 0.4463 + 250 * 0.4663 + (total - 400) * 0.5663;
    }

    printf("%.1f", prize);

    return 0;
}
