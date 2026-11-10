#include <stdio.h>

int main() {
    int n = 25;
    int *ptr = &n;

    printf("Value of n = %d\n", n);
    printf("Address of n = %p\n", (void *)&n);
    printf("Value stored in ptr = %p\n", (void *)ptr);
    printf("Value pointed to by ptr = %d\n", *ptr);

    *ptr = 50;
    printf("New value of n = %d\n", n);

    return 0;
}
