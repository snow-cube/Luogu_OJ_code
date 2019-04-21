#include <iostream>
// #include <cstring>
#include <cstdlib>

int char_to_num(char c);

using namespace std;
int main() {
    int result = 0, n = 1, num;
    char ISBN[14];
    cin.getline(ISBN, 14);

    for (int i = 0; i < 11; i++) {
        if ((num = char_to_num(ISBN[i])) >= 0) {
            // cout << num << endl;
            result += num * n++;
        }
    }       
    result = result % 11;
    // cout << result << endl << char_to_num(ISBN[12]) << endl;
    if (char_to_num(ISBN[12]) == result) {
        cout << "Right" << endl;
    } else {
        ISBN[12] = '\0';
        cout << ISBN << (result == 10 ? 'X' : (char)(result + 48)) << endl;
    }

    return 0;
}

int char_to_num(char c) {
    if (c >= 48 && c <= 57) {
        return c - 48;
    } else if (c == 'X') {
        return 10;
    } else {
        return -1;
    }
}
