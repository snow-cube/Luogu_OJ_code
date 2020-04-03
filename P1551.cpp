#include <cstdio>

int set[5005];

int find(int a) {
    if (set[a] != a)
        set[a] = find(set[a]);
    return set[a];
}

void uni(int a, int b) {
    int set_a = find(a);
    int set_b = find(b);
    set[set_b] = set_a;
}

int main() {
    for (int i = 0; i < 5005; i++)
        set[i] = i;
    int n, m, p;
    scanf("%d%d%d", &n, &m, &p);
    for (int i = 0; i < m; i++) {
        int a, b;
        scanf("%d%d", &a, &b);
        uni(a, b);
    }

    int a, b;
    while (p--) {
        scanf("%d%d", &a, &b);
        printf("%s\n", (find(a) == find(b)) ? "Yes" : "No");
    }
    
    return 0;
}