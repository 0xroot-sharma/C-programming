#include <stdio.h>

enum Day {
    MONDAY = 1, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY
};

int main() {
    enum Day today = WEDNESDAY;

    printf("Day number = %d\n", today);
    return 0;
}
