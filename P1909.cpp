#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n;
    int prize;
    int amount;
    int cost, cost_min = 0x3f3f3f3f;
    cin >> n;
    for (int i = 0; i < 3; i++) {
        cin >> amount >> prize;
        cost = ceil((double)n / amount) * prize; 
        if (cost < cost_min) {
            cost_min = cost; 
        }
    }

    cout << cost_min;
    
    return 0;
}