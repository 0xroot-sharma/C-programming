#include <stdio.h>

int main() {
    int n;

    printf("Enter number of elements (1-100): ");
    scanf("%d", &n);

    if (n < 1 || n > 100) {
        printf("Invalid size.\n");
        return 1;
    }

    int arr[100];
    for (int i = 0; i < n; i++) {
        printf("Enter arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    int largest = arr[0], smallest = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest)
            largest = arr[i];
        if (arr[i] < smallest)
            smallest = arr[i];
    }

    printf("Largest = %d\n", largest);
    printf("Smallest = %d\n", smallest);

    return 0;
}
