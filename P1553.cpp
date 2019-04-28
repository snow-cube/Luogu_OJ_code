#include <iostream>
#include <cstring>
using namespace std;

void reverse(char *num, char *new_num) {
    int len = strlen(num);
    for (int i = 0; i < len; i++) {
        new_num[len-i-1] = num[i];
    }
}

void rm_zero(char *num) {
    int begin_index = 0;
    for (int i = 0; num[i] == '0'; i++) begin_index++;

    for (int i = begin_index; num[i]; i++) {
        num[i - begin_index] = num[i]; 
        // cout << num[i - begin_index] << endl;
        if (begin_index) num[i] = '\0'; // remove old
    }
    for (int i = strlen(num) - 1; num[i] == '0' && i > 0; i--) num[i] = '\0';

    for (int i = 0; num[i]; i++) {
        if (num[i] != '0')
        return;
    }
    for (int i = 1; num[i]; i++) num[i] = '\0';
}

int main() {
    char num[24] = {0};
    char new_num[24] = {0};
    cin.getline(num, 24);
    
    char character = 0;
    char part_left[24] = {0};
    char part_right[12] = {0};
    char *part = part_left; // first save to left
    int index = 0;
    for (int i = 0; num[i]; i++) {
        if (num[i] == '.') {
            character = '.';
            part = part_right;
            index = 0;
        } else if (num[i] == '/') {
            character = '/';
            part = part_right;
            index = 0;
        } else if (num[i] == '%') {
            character = '%';
            break;
        } else {
            part[index++] = num[i]; 
        }
    }

    if (character == 0) {
        reverse(num, new_num);
        // cout << new_num << endl;
        rm_zero(new_num);
        
        cout << new_num << endl;
    } else if (character == '/') {
        reverse(part_left, new_num);
        // cout << part_right << endl;
        rm_zero(new_num);
        // cout << new_num << endl;
        new_num[strlen(new_num)] = '/';
        int len = strlen(new_num);
        // cout << len << endl;
        reverse(part_right, new_num + strlen(new_num));
        // cout << new_num << endl;
        rm_zero(new_num + len);
        
        cout << new_num << endl;
    } else if (character == '%') {
        reverse(part_left, new_num);
        rm_zero(new_num);
        new_num[strlen(new_num)] = '%';
        cout << new_num << endl;
    } else {
        reverse(part_left, new_num);
        rm_zero(new_num);
        new_num[strlen(new_num)] = '.';
        reverse(part_right, new_num + strlen(new_num));

        for (int i = strlen(new_num) - 1; new_num[i] == '0' && new_num[i-1] != '.'; i--) new_num[i] = '\0';

        cout << new_num << endl;
    }

    return 0;
}
