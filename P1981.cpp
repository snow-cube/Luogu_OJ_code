#include <iostream>
#include <stack>
#include <string>
#include <cstdio>
using namespace std;

int main() {
    stack<long long int> nums;
    stack<int> opes;

	string s;
	cin >> s;

    char c;
    long long num = 0;
    
    for (int i = 0; c = s[i]; i++) {
        if (c >= '0' && c <= '9')
            num = num*10 + c-'0';
        else {
            nums.push(num % 10000);
            num = 0;

            c = (c == '+' ? 1 : 2);
            if (opes.empty() || c > opes.top())
                opes.push(c);
            else {
                long long result = 0;
                while (!opes.empty() && c <= opes.top()) {
                	result = nums.top();
                    nums.pop();
                    if (c == 1) {
                        result += nums.top();
                    } else {
                        result *= nums.top();
					}
					nums.pop();
                    opes.pop();
                    nums.push(result % 10000);
                    opes.push(c);
                }
            }
        }
    }

    while (!opes.empty()) {
        if (opes.top() == 1) {
            num = (num + nums.top()) % 10000;
        } else {
            num = (num * nums.top()) % 10000;
        }
        opes.pop();
        nums.pop();
    }

    cout << num % 10000 << endl;

    return 0;
}
