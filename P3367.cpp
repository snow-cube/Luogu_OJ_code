#include <cstdio>

int set[10005];

int find(int a) {
    if (set[a] != a)
        set[a] = find(set[a]);
    return set[a];
}

void uni(int a, int b) {
    set[find(b)] = find(a);
}

int main() {
    int N, M;
    scanf("%d%d", &N, &M);

    for (int i = 0; i <= N; i++)
    set[i] = i;

    for (int i = 0; i < M; i++) {
        int Z, X, Y;
        scanf("%d%d%d", &Z, &X, &Y);
        if (Z == 1)
            uni(X, Y);
        else
            printf("%s\n", (find(X) == find(Y)) ? "Y" : "N");
    }
   
    return 0;
}