#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int arr[10000] = {0};
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int index = m, time = 0, flag = 0;
    while (1) {
        for (int i = 0; i < m; i++) {
            if (!arr[i]) {
                if (index < n) {
                    arr[i] = arr[index++];
                    arr[i]--;
                }
            } else {
                arr[i]--;
            }
            //cout << arr[i] << " ";
            flag += arr[i];
        }
        time++;

        if (!flag && index == n)
            break;
        else
            flag = 0;
        //cout << endl;
    }

    cout << time << endl;

    return 0;
}
