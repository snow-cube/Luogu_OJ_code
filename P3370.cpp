#include <iostream>
#include <string>
using namespace std;

const int kMax = 128000000;
bool hash_table[kMax];

unsigned int bkdr_hash(string s) {
    unsigned int seed = 13131;
    unsigned int hash = 0;

    for (int i = 0; i < s.size(); i++) {
        hash = hash*seed + s[i];
    }

    return hash & 0x7fffffff;
}

int main() {
    int N;
    cin >> N;
    string s;
    while (N--) {
        cin >> s;
        hash_table[bkdr_hash(s) % kMax] = true;
    }

    int count = 0;
    for (int i = 0; i < kMax; i++)
        count += hash_table[i];
    cout << count << endl;

    return 0;
}
