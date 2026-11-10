#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr = calloc(3, sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (int i = 0; i < 3; i++)
        arr[i] = (i + 1) * 10;

    int *temp = realloc(arr, 5 * sizeof(int));
    if (temp == NULL) {
        free(arr);
        printf("Memory reallocation failed.\n");
        return 1;
    }
    arr = temp;

    arr[3] = 40;
    arr[4] = 50;

    for (int i = 0; i < 5; i++)
        printf("%d ", arr[i]);
    printf("\n");

    free(arr);
    return 0;
}
