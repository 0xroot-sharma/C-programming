#include <stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf((n % 2 == 0) ? "Even\n" : "Odd\n");

    return 0;
}
