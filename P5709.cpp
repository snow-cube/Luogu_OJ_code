#include <cstdio>

int main() {
    int m, t, s;
    scanf("%d%d%d", &m, &t, &s);

    int eaten = s / t;
    if (eaten >= m) {
        printf("0\n");
    } else if (s % t) {
        printf("%d\n", m - eaten - 1);
    } else {
        printf("%d\n", m - eaten);
    }

    return 0;
}