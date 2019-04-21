#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

int count = 0;
int nums[20] = {0};

bool is_prime(int num) {
    for (int i = 2; i <= (int)sqrt(num); i++) {
        if (!(num % i)) return false;
    }
    return true;
}

void add(int num, int index, int end, int n) {
    if (n > 0) {
        for (int i = index; i <= end - n + 1; i++) {
            add(num + nums[i], i + 1, end, n - 1);
            // printf("+%d ", nums[i]);
        }
    } else {
        // cout << endl;
        if (is_prime(num)) {
            // cout << "prime: " << num << endl;
            count++;
        }
    }
}

int main() {
//    cout << is_prime(13) << endl;
//    cout << is_prime(4) << endl;
    int n = 0, k = 0;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    add(0, 0, n-1, k);

    cout << count << endl;

    return 0;
}
