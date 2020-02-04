#include <cstdio>
#include <cstring>
using namespace std;

int target[200005];
int step[200005];
bool found[200005];
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        scanf("%d", &target[i]);
    int ans = 300000;
    for (int i = 1; i <= n; i++) {
        int s = 0, x = i;
        if (found[x])
            continue;
        found[x] = true;

        memset(step, 0, sizeof(step));
        while (!step[x]) {
            step[x] = ++s;
            x = target[x];
            if (found[x] && !step[x]) {
                s = 300005;
                break;
            }
            found[x] = true;
        }
        if (s - step[x] + 1 < ans)
            ans = s - step[x] + 1;
    }

    printf("%d\n", ans);

    return 0;
}