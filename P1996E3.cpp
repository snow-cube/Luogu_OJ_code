#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> qu;
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        qu.push(i);

    while (!qu.empty()) {
        for (int i = 1; i < m; i++) {
            qu.push(qu.front());
            qu.pop();
        }
        cout << qu.front() << " ";
        qu.pop();
    }
    cout << endl;

    return 0;
}
