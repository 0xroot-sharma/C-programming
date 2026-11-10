#include <stdio.h>

int main() {
    FILE *fp = fopen("sample.txt", "w");

    if (fp == NULL) {
        printf("Unable to open file for writing.\n");
        return 1;
    }

    fprintf(fp, "Learning file handling in C.\n");
    fprintf(fp, "This is a second line.\n");
    fclose(fp);

    fp = fopen("sample.txt", "r");
    if (fp == NULL) {
        printf("Unable to open file for reading.\n");
        return 1;
    }

    char line[200];
    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }

    fclose(fp);
    return 0;
}
