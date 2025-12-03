#include <stdio.h>
#include <math.h>

int main() {printf("Name - Rishi Mishra\nSAP_ID - 590028214\nCourse- BCA\nBatch - B5\n");
 printf("--------------------------------\n"); 
    int num, first, last, digits, swappedNum;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Get the last digit
    last = num % 10;

    // Find the number of digits
    digits = (int)log10(num);

    // Get the first digit
    first = num / (int)pow(10, digits);

    // Swap first and last digits
    swappedNum = last * (int)pow(10, digits) + (num % (int)pow(10, digits));
    swappedNum = swappedNum - last + first;

    printf("Number after swapping first and last digits: %d\n", swappedNum);

    return 0;
}

