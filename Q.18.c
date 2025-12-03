#include <stdio.h>

int main() {printf("Name - Rishi Mishra\nSAP_ID - 590028214\nCourse- BCA\nBatch - B5\n");
 printf("--------------------------------\n"); 
    float percentage;
    printf("Enter your percentage (0 - 100): ");
    scanf("%f", &percentage);
 
    if (percentage < 0 || percentage > 100) {
        printf("Invalid input! Percentage should be between 0 and 100.\n");
    } 
    else {
        // Grade classification using if–else ladder
        if (percentage >= 90) {
            printf("Grade: A+\n");
        } 
        else if (percentage >= 80) {
            printf("Grade: A\n");
        } 
        else if (percentage >= 70) {
            printf("Grade: B\n");
        } 
        else if (percentage >= 60) {
            printf("Grade: C\n");
        } 
        else if (percentage >= 50) {
            printf("Grade: D\n");
        } 
        else if (percentage >= 40) {
            printf("Grade: E\n");
        } 
        else {
            printf("Grade: F (Fail)\n");
        }
    }

    return 0;
}

