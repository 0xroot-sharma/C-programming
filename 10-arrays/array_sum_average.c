#include <stdio.h>

int main() {
    int arr[10];
    int sum = 0;

    for (int i = 0; i < 10; i++) {
        printf("Enter value for arr[%d]: ", i);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("Sum of all values = %d\n", sum);
    printf("Average = %.2f\n", sum / 10.0);

    return 0;
}
