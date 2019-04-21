#include <iostream>
using namespace std;
int main() {
    bool tree[10001] = {0};
    int L, M, start, end, count = 0;
    cin >> L >> M;
    for (int i = 0; i < M; i++) {
        cin >> start >> end;
        for (int j = start; j <= end; j++) {
            tree[j] = 1;
        }
    }
    for (int i = 0; i <= L; i++) {
        if (!tree[i]) 
            count++;
    }
    cout << count << endl;
    
    return 0;
}