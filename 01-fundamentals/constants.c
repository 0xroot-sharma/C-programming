#include <stdio.h>

#define PI 3.14159

int main() {
    const int DAYS_IN_WEEK = 7;
    float radius = 5.0f;
    float area = PI * radius * radius;

    printf("Days in a week = %d\n", DAYS_IN_WEEK);
    printf("Area of circle = %.2f\n", area);

    return 0;
}
