#include <iostream>
#include <algorithm>
using namespace std;

const int kMax = 10005;
int arr[kMax];

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr+n, greater<int>());
    
    int result = 0, sum;
    while (n > 1) {
        sum = arr[n-1] + arr[n-2];
        result += sum;
        arr[n-1] = arr[n-2] = 0;
        n--;
        
        int key = n - 2;
        while (sum > arr[key] && key >= 0) {
            arr[key+1] = arr[key];
            key--;
        }

        arr[key+1] = sum;
    }
    //result += arr[0];

    cout << result << endl;

    return 0;
}
