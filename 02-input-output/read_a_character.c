#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);  // Leading space skips leftover whitespace

    printf("You entered: %c\n", ch);

    return 0;
}
