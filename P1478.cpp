#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int s_list[5000] = {0};
    int n, s, a, b, xi, yi;
    cin >> n >> s >> a >> b;
    
    int idx = 0;
    for (int i = 0; i < n; i++) {
        cin >> xi >> yi;
        if (xi <= a + b) {
            s_list[idx++] = yi;
            // cout << yi << endl;
        }
    }
    // cout << "index: " << idx << endl;
    
    int count = 0;
    sort(s_list, s_list+idx);
    // for (int i = 0; i < idx; i++) cout << s_list[i] << endl;
    for (int i = 0; i < idx; i++) {
        if ((s -= s_list[i]) >= 0) count++;
        else break;
    }

    cout << count << endl;

    return 0;
}
