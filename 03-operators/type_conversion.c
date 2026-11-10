#include <stdio.h>

int main() {
    int a = 5, b = 2;
    float result1 = a / (float)b;
    int result2 = (int)3.89;

    printf("Floating-point division = %.2f\n", result1);
    printf("Explicit conversion to int = %d\n", result2);

    return 0;
}
