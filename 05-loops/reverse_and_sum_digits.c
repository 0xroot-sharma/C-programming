#include <stdio.h>

int main() {
    int n, reverse = 0, sum = 0;

    printf("Enter a non-negative number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Please enter a non-negative number.\n");
        return 1;
    }

    while (n != 0) {
        int lastDigit = n % 10;
        printf("%d\n", lastDigit);
        sum += lastDigit;
        reverse = reverse * 10 + lastDigit;
        n /= 10;
    }

    printf("Sum of digits = %d\n", sum);
    printf("Reverse = %d\n", reverse);
    return 0;
}
