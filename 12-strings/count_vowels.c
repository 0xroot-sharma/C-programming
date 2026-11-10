#include <stdio.h>
#include <ctype.h>

int main() {
    char text[200];
    int count = 0;

    printf("Enter a line: ");
    if (fgets(text, sizeof(text), stdin) == NULL)
        return 1;

    for (int i = 0; text[i] != '\0'; i++) {
        char ch = (char)tolower((unsigned char)text[i]);

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            count++;
    }

    printf("Number of vowels = %d\n", count);
    return 0;
}
