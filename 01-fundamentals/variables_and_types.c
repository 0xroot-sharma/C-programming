#include <stdio.h>

int main() {
    int age = 19;
    char grade = 'A';
    float percentage = 86.5f;
    double distance = 12345.6789;

    printf("Age = %d\n", age);
    printf("Grade = %c\n", grade);
    printf("Percentage = %.2f\n", percentage);
    printf("Distance = %.4lf\n", distance);

    return 0;
}
