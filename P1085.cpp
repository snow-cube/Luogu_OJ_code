#include <iostream>
#include <cstdio>

using namespace std;
int main() {
    int time = 0, time1 = 0, time2 = 0;
    int max_day = 0;
    int max_time = 0;
    for (int i = 0; i < 7; i++) {
        scanf("%d %d", &time1, &time2);
        time = time1 + time2;
        if(time > max_time) {
            max_day = i + 1;
            max_time = time;
        }
    }
    cout << max_day << endl;
    
    return 0;
}

