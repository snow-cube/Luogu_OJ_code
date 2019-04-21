#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int num[3] = {0};
    bool count[9] = {0};
    int index = 0;
    bool is_num = true;

    for (num[0] = 111; num[0] <= 333; num[0]++) {
        num[1] = num[0] * 2;
        num[2] = num[0] * 3;
        for (int i = 0; i < 9; i++) {
            count[i] = 0;
        }
        for (int n = 0; n < 3; n++) {
            for (int m = 2; m >= 0; m--) {
                index = ((num[n] - num[n] % (int)pow(10, m)) - (num[n] - num[n] % (int)pow(10, m+1))) / (int)pow(10, m) - 1; 
                if (index == -1){
                    is_num = false;
                }
                if (count[index]) {
                    is_num = false;
                }
                else {
                    count[index] = 1;
                }
            }
        }
        if (is_num) {
            cout << num[0] << " " << num[1] << " " << num[2] << endl;
        } else {
            is_num = true;
        }
    }
    
    return 0;
}