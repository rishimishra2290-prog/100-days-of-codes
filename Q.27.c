#include <stdio.h>

int main() { printf("Name - Rishi Mishra\nSAP_ID - 590028214\nCourse- BCA\nBatch - B5\n");
 printf("--------------------------------\n"); 
    int n, i, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculate sum of first n odd numbers
    for (i = 1; i <= n; i++) {
        sum += (2 * i - 1); // Formula for ith odd number
    }

    printf("Sum of first %d odd numbers = %d\n", n, sum);

    return 0;
}

