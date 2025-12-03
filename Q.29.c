#include <stdio.h>

int main() { printf("Name - Rishi Mishra\nSAP_ID - 590028214\nCourse- BCA\nBatch - B5\n");
 printf("--------------------------------\n"); 
    int n, i;
    long long factorial = 1;  // Use long long to handle large results

    printf("Enter a number: ");
    scanf("%d", &n);

    // Check for negative input
    if (n < 0) {
        printf("Factorial of a negative number doesn't exist.\n");
    } 
    else {
        // Calculate factorial using a for loop
        for (i = 1; i <= n; i++) {
            factorial *= i;
        }

        printf("Factorial of %d = %lld\n", n, factorial);
    }

    return 0;
}

