#include <iostream>

using namespace std;
int main() {
    int n = 0;
    cin >> n;
    cin.get();

    char pwd[51] = {0};
    cin.getline(pwd, 51);
    int i = 0;
    while (pwd[i]) {
        pwd[i] = (n % 26 + pwd[i] - 97) % 26 + 97;
        i++;
    }
    
    cout << pwd << endl;

    return 0;
}
