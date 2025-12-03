#include <stdio.h>

int main() {printf("Name - Rishi Mishra\nSAP_ID - 590028214\nCourse- BCA\nBatch - B5\n");
 printf("--------------------------------\n"); 
    int days;
    int fine = 0;

    printf("Enter number of days late: ");
    scanf("%d", &days);

    if (days <= 0) {
        printf("No fine Book returned on time\n");
    }
    else if (days <= 5) {
        fine = days * 2;
        printf("Fine: %d\n", fine);
    }
    else if (days <= 10) {
        fine = (5 * 2) + (days - 5) * 4;
        printf("Fine: %d\n", fine);
    }
    else if (days <= 30) {
        fine = (5 * 2) + (5 * 4) + (days - 10) * 6;
        printf("Fine: %d\n", fine);
    }
    else {
        printf("Membership Cancelled due to delay of more than 30 days\n");
    }

    return 0;
}

