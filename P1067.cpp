#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	int num;
	for (int i = n; i >= 0; i--) {
		cin >> num;
        //cout << endl << num << endl;
        if (num == 0) {
            continue;
        } else if (num > 0) {
            if (i != n) cout << "+";
        } else {
            cout << "-";
        }
        if (num != 1 && num != -1 || !i) cout << abs(num);

        if (i) { // not the last item
            cout << "x";
            if (i != 1) cout << "^" << i;
        }
	}
    cout << endl;
	
	return 0;
}
