#include <cstdio>
#include <cmath>

int main() {
    float a, b, c;
    scanf("%f%f%f", &a, &b, &c);
    float p = (a + b + c) / 2;
    printf("%.1f\n", sqrt(p * (p-a) * (p-b) * (p-c)));

    return 0;
}