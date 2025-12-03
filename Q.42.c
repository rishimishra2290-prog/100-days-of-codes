#include <stdio.h>

int main() {printf("Name - Rishi Mishra\nSAP_ID - 590028214\nCourse- BCA\nBatch - B5\n");
 printf("--------------------------------\n"); 
    int num, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Calculate sum of proper divisors
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0)
            sum += i;
    }

    // Check if the number is perfect
    if (sum == num)
        printf("%d is a Perfect Number.\n", num);
    else
        printf("%d is not a Perfect Number.\n", num);

    return 0;
}

