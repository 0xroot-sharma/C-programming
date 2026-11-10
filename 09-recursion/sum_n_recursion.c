#include <stdio.h>

int sum(int n);

int main() {
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Enter a non-negative number.\n");
        return 1;
    }

    printf("Sum = %d\n", sum(n));
    return 0;
}

int sum(int n) {
    if (n == 0)
        return 0;

    return n + sum(n - 1);
}
