#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct Student s;

    printf("Enter roll number: ");
    scanf("%d", &s.roll);

    printf("Enter name (one word): ");
    scanf("%49s", s.name);

    printf("Enter marks: ");
    scanf("%f", &s.marks);

    printf("\nStudent Details\n");
    printf("Roll = %d\nName = %s\nMarks = %.2f\n", s.roll, s.name, s.marks);

    return 0;
}
