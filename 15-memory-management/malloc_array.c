#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    printf("How many numbers? ");
    scanf("%d", &n);

    if (n <= 0 || n > 10000) {
        printf("Invalid size.\n");
        return 1;
    }

    int *arr = malloc((size_t)n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Numbers: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    free(arr);
    return 0;
}
