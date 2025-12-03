#include<stdio.h>

int main() {printf("Name - Rishi Mishra\nSAP_ID - 590028214\nCourse- BCA\nBatch - B5\n");
 printf("--------------------------------\n"); 
    int totalSeconds;
    int hours, minutes, seconds;

    // Input total time in seconds
    printf("Enter time in seconds: ");
    scanf("%d", &totalSeconds);

    // Convert seconds to hours, minutes, and seconds
    hours = totalSeconds / 3600;          // 1 hour = 3600 seconds
    minutes = (totalSeconds % 3600) / 60; // Remaining minutes
    seconds = totalSeconds % 60;          // Remaining seconds

    printf("\nTime is: %d:%d:%d\n", hours, minutes, seconds);

    return 0;
}

