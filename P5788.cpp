#include <cstdio>
#include <stack>
using namespace std;

int nums[3000005];
int result[3000005];
stack<int> st;

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &nums[i]);
        while (!st.empty() && nums[st.top()] < nums[i]) {
            result[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }

    for (int i = 1; i <= n; i++)
        printf("%d ", result[i]);
    puts("");

    return 0;
}