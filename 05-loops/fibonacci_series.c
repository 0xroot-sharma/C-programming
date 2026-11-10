#include <stdio.h>

int main() {
    int n;
    long long a = 0, b = 1;

    printf("How many terms? ");
    scanf("%d", &n);

    if (n < 1 || n > 90) {
        printf("Enter a value from 1 to 90.\n");
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        printf("%lld ", a);
        long long next = a + b;
        a = b;
        b = next;
    }
    printf("\n");

    return 0;
}
