#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

void addRecord(void);
void showRecords(void);

int main() {
    int choice;

    do {
        printf("\n----- Student Record Manager -----\n");
        printf("1. Add record\n");
        printf("2. Show records\n");
        printf("0. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addRecord();
                break;
            case 2:
                showRecords();
                break;
            case 0:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice.\n");
        }
    } while (choice != 0);

    return 0;
}

void addRecord(void) {
    struct Student s;
    FILE *fp = fopen("students.txt", "a");

    if (fp == NULL) {
        printf("Could not open students.txt\n");
        return;
    }

    printf("Enter roll number: ");
    scanf("%d", &s.roll);

    printf("Enter name (one word): ");
    scanf("%49s", s.name);

    printf("Enter marks: ");
    scanf("%f", &s.marks);

    fprintf(fp, "%d %s %.2f\n", s.roll, s.name, s.marks);
    fclose(fp);

    printf("Record saved.\n");
}

void showRecords(void) {
    struct Student s;
    FILE *fp = fopen("students.txt", "r");

    if (fp == NULL) {
        printf("No records found yet.\n");
        return;
    }

    printf("\nRoll\tName\tMarks\n");
    while (fscanf(fp, "%d %49s %f", &s.roll, s.name, &s.marks) == 3) {
        printf("%d\t%s\t%.2f\n", s.roll, s.name, s.marks);
    }

    fclose(fp);
}
