#include <stdio.h>

int main() {
    int a = 10, b = 20;

    a += b;
    printf("After a += b, a = %d\n", a);

    a++;
    printf("After a++, a = %d\n", a);

    --b;
    printf("After --b, b = %d\n", b);

    return 0;
}
