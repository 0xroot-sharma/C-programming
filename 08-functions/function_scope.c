#include <stdio.h>

int globalValue = 100;

void showValue(void);

int main() {
    int localValue = 25;

    printf("Local value = %d\n", localValue);
    showValue();

    return 0;
}

void showValue(void) {
    printf("Global value = %d\n", globalValue);
}
