#include <iostream>
#include <cstdio>
#include <stack>
using namespace std;

int main() {
    stack<char> st;
    char c;
    bool flag = true;
    while ((c = getchar()) != '@') {
        if (c == '(') {
            st.push('(');
        } else if (c == ')') {
            if (st.empty() || st.top() != '(') {
                flag = false;
                break;
            }
            st.pop();
        }
    }
    if (!st.empty())
        flag = false;

    cout << (flag ? "YES" : "NO") << endl;

    return 0;
}
