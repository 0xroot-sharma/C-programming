#include <stdio.h>

int main() {
    int a = 200, b = 150, c = 90;

    printf("%d\n", a > b && b > c);
    printf("%d\n", a > b || b < c);
    printf("%d\n", !(a > b));

    return 0;
}
