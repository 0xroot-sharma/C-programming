#include <stdio.h>

int main() {
    int arr[100], n, key, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n < 1 || n > 100) {
        printf("Invalid size.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Enter arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Enter value to search: ");
    scanf("%d", &key);

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("Found at index %d\n", i);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Not found\n");

    return 0;
}
