#include <cstdio>
using namespace std;

int main() {
    int n;
    double last = 0, llast = 1;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        last += llast;
        llast = last - llast;
    }

    printf("%.2lf\n", last);

    return 0;
}