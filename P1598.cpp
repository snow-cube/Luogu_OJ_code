#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;
int main() {
    char sen[405] = {0};
    char tmp[101] = {0};
    char line[27] = {0};
    int count[26] = {0};
    bool flag = false; // 后面是否有星号

    for (int i = 0; i < 4; i++) {
        cin.getline(tmp, 101);
        strcat(sen, tmp);
    }

    for (int j = 0; sen[j]; j++) {
        if (sen[j] >= 65 && sen[j] <= 90) count[sen[j] - 65]++;
    }

    for (int i = 400; i >= 1; i--) {
        for (int j = 25; j >= 0; j--) {
            if (count[j] >= i) {
                line[j] = '*';
                flag = true;
            } else if (flag) {
                line[j] = ' ';
            } else {
                line[j] = '\0';
            }
        }
        
        if (line[0]) cout << line[0];
        for (int j = 1; line[j]; j++) {
            cout << " " << line[j];
        }

        if (flag == true) cout << endl;
        flag = false;
    }

    cout << "A B C D E F G H I J K L M N O P Q R S T U V W X Y Z" << endl;

    return 0;
}

