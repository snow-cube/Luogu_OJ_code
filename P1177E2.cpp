#include <iostream>
using namespace std;

int N;
int a[100005];
int t[100005];

void mergeSort(int l, int r) {
    if (l >= r)
        return;
    
    int mid = (l + r) / 2;
    mergeSort(l, mid);
    mergeSort(mid+1, r);

    // merge
    int p = l, pl = l, pr = mid + 1;
    while (pl <= mid && pr <= r) {
        if (a[pl] < a[pr])
            t[p++] = a[pl++];
        else
            t[p++] = a[pr++];
    }

    while (pl <= mid)
        t[p++] = a[pl++];
    while (pr <= r)
        t[p++] = a[pr++];

    for (int i = l; i <= r; i++)
        a[i] = t[i];
}

int main() {
    cin >> N;
    for (int i = 0; i < N; i++)
        cin >> a[i];

    mergeSort(0, N-1);

    for (int i = 0; i < N; i++)
        cout << a[i] << " ";
    cout << endl;

    return 0;
}