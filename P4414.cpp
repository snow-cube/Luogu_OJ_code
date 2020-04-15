#include <bits/stdc++.h>
int main() {
    int N[3]; char X, Y, Z;
    std::cin >> N[0] >> N[1] >> N[2] >> X >> Y >> Z;
    std::sort(N, N+3);
    printf("%d %d %d\n", N[X-65], N[Y-65], N[Z-65]);
    return 0;
}