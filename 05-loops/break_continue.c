#include <stdio.h>

int main() {
    for (int i = 1; i <= 10; i++) {
        if (i == 4)
            continue;  // Skip 4

        if (i == 8)
            break;     // Stop when i becomes 8

        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
