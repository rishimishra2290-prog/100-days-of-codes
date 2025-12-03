#include <stdio.h>

int main() {
    printf("Name - Rishi Mishra\nSAP_ID - 590028214\nCourse- BCA\nBatch - B5\n");
    printf("--------------------------------\n");

    enum Months {JANUARY, FEBRUARY, MARCH, APRIL, MAY, JUNE,
                 JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER};

    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    char *monthNames[] = {"January", "February", "March", "April", "May", "June",
                          "July", "August", "September", "October", "November", "December"};

    for(int m = JANUARY; m <= DECEMBER; m++) {
        printf("%s has %d days\n", monthNames[m], days[m]);
    }

    return 0;
}

