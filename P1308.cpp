#include <iostream>
#include <cstring>
#include <cctype>
#include <stdio.h>

using namespace std;
int main() {
    char word[40] = {0}, word_now[40] = {0};
    char passage[1000001] = {0};
    unsigned long long int count = 0, first_index = -1, word_index = 0;
    
    fgets(word, sizeof word, stdin);
    word[strlen(word)-1] = '\0';

    //fgets(passage, sizeof passage, stdin);
    cin.getline(passage, 1000001, EOF);
    
    for (int i = 0; i < strlen(word); i++) {
        word[i] = tolower(word[i]);
    } 

    for (int i = 0; passage[i]; i++) {
        if (passage[i] == ' ' || passage[i] == '\n') {
            if (!strcmp(word_now, word)) {
                count++;
                if (first_index == -1) {
                    first_index = i - word_index;
                }
            }
            memset(word_now, 0, 25);
            word_index = 0;
        } else {
            word_now[word_index++] = tolower(passage[i]);
        }
    }

    if (count == 0) {
        cout << -1 << endl;
    } else {
        cout << count << " " << first_index << endl;
    }

    return 0;
}

