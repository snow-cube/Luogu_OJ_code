#include <iostream>
#include <algorithm>
using namespace std;

int apple[10001];
int cnt; // records apple heaps number / types num

void update(int n) {
    cnt++;
    apple[cnt] = n;
    push_heap(apple+1, apple+cnt+1, greater<int>());
}

int pop() {
    int now = apple[1];
    pop_heap(apple+1, apple+cnt+1, greater<int>());
    cnt--;
    return now;
}

int main() {
    cin >> cnt;
    for (int i = 1; i <= cnt; i++)
        cin >> apple[i];
        
     // make heap by small
     make_heap(apple+1, apple+cnt+1, greater<int>());
     
     // tili: sum += s1+s2, until count == 1
     int sum = 0;
     while (cnt > 1) {
        // pop heap -> s1
        int s1 = pop();
        // pop heap -> s2
        int s2 = pop();
        // create new heap -> s1+s2
        sum += s1+s2;
        update(s1+s2);
     }
     cout << sum << endl;
    
    return 0;
}



