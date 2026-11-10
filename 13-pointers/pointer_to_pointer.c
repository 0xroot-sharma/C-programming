#include <stdio.h>

int main() {
    int n = 10;
    int *ptr = &n;
    int **ptr2 = &ptr;

    printf("n = %d\n", n);
    printf("*ptr = %d\n", *ptr);
    printf("**ptr2 = %d\n", **ptr2);

    return 0;
}
