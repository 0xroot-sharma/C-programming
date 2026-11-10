#include <stdio.h>

unsigned long long fact(int n);

int main() {
    int n;

    printf("Enter a number (0 to 20): ");
    scanf("%d", &n);

    if (n < 0 || n > 20) {
        printf("Enter a value from 0 to 20.\n");
        return 1;
    }

    printf("Factorial = %llu\n", fact(n));
    return 0;
}

unsigned long long fact(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * fact(n - 1);
}
