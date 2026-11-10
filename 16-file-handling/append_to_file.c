#include <stdio.h>

int main() {
    FILE *fp = fopen("log.txt", "a");

    if (fp == NULL) {
        printf("Unable to open file.\n");
        return 1;
    }

    fprintf(fp, "A new log entry was added.\n");
    fclose(fp);

    printf("Entry saved to log.txt\n");
    return 0;
}
