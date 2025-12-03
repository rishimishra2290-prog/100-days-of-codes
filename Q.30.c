#include <stdio.h>

int main() { printf("Name - Rishi Mishra\nSAP_ID - 590028214\nCourse- BCA\nBatch - B5\n");
 printf("--------------------------------\n"); 
    int num, reversed = 0, remainder;
    printf("Enter a number: ");
    scanf("%d", &num);

    // Reverse the number using a loop
    while (num != 0) {
        remainder = num % 10;              // Get the last digit
        reversed = reversed * 10 + remainder; // Build the reversed number
        num = num / 10;                    // Remove the last digit
    }

    printf("Reversed number = %d\n", reversed);

    return 0;
}

