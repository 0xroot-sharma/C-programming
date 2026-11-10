#include <stdio.h>

int main() {
    int n;
    unsigned long long fact = 1;

    printf("Enter a non-negative number (up to 20): ");
    scanf("%d", &n);

    if (n < 0 || n > 20) {
        printf("Please enter a value from 0 to 20.\n");
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        fact *= i;
    }

    printf("Factorial = %llu\n", fact);
    return 0;
}
