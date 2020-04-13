#include <cstdio>
void f() {
    char c = getchar();
    if (c != '\n' && c != '\r') {
        f();
        putchar(c);
    }
}
int main() {
    f();
    puts("");
    return 0;
}