#include <stdio.h>

int main() {
    printf("Name - Rishi Mishra\nSAP_ID - 590028214\nCourse- BCA\nBatch - B5\n");
    printf("--------------------------------\n");

    enum Day {
        SUNDAY,
        MONDAY,
        TUESDAY,
        WEDNESDAY,
        THURSDAY,
        FRIDAY,
        SATURDAY
    };

    printf("Day: %s, Integer Value: %d\n", "SUNDAY", SUNDAY);
    printf("Day: %s, Integer Value: %d\n", "MONDAY", MONDAY);
    printf("Day: %s, Integer Value: %d\n", "TUESDAY", TUESDAY);
    printf("Day: %s, Integer Value: %d\n", "WEDNESDAY", WEDNESDAY);
    printf("Day: %s, Integer Value: %d\n", "THURSDAY", THURSDAY);
    printf("Day: %s, Integer Value: %d\n", "FRIDAY", FRIDAY);
    printf("Day: %s, Integer Value: %d\n", "SATURDAY", SATURDAY);

    return 0;
}
