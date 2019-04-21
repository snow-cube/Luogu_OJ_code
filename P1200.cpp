#include <iostream>
#include <cstring>

using namespace std;

int find_num(char *);

int main() {
    char org[7], star[7];
    cin.getline(org, 7);
    cin.getline(star, 7);

    cout << ((find_num(org) % 47 == find_num(star) % 47) ? "GO" : "STAY") << endl;

    return 0;
}

int find_num(char* str) {
    int result = 1;
    for (int i = 0; i < strlen(str); i++) {
        result *= str[i] - 64;
    }

    return result;
}
