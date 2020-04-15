#include <cstdio>
#include <algorithm>
using namespace std;

int gcd(int a, int b) {
    while (b % a)
        a = b % a;
    return a;
}

int main() {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    int mi = min(min(a, b), c);
    int ma = max(max(a, b), c);
    
    int g = gcd(mi, ma);
    printf("%d/%d\n", mi / g, ma / g);

    return 0;
}