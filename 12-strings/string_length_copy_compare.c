#include <stdio.h>
#include <string.h>

int main() {
    char first[100], second[100];

    printf("Enter first word: ");
    scanf("%99s", first);

    printf("Enter second word: ");
    scanf("%99s", second);

    printf("Length of first = %zu\n", strlen(first));

    strcpy(second, first);
    printf("After copying, second = %s\n", second);

    if (strcmp(first, second) == 0)
        printf("Both strings are equal.\n");

    return 0;
}
