#include <stdio.h>
#include <string.h>

union Data {
    int number;
    float decimal;
    char text[20];
};

int main() {
    union Data data;

    data.number = 25;
    printf("Integer = %d\n", data.number);

    data.decimal = 4.5f;
    printf("Float = %.1f\n", data.decimal);

    strcpy(data.text, "C language");
    printf("Text = %s\n", data.text);

    return 0;
}
