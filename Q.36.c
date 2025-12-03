#include <stdio.h>

int main() { printf("Name - Rishi Mishra\nSAP_ID - 590028214\nCourse- BCA\nBatch - B5\n");
 printf("--------------------------------\n"); 
    int num1, num2, i, hcf;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Find HCF using simple iteration
    for (i = 1; i <= num1 && i <= num2; ++i) {
        // Check if i divides both numbers
        if (num1 % i == 0 && num2 % i == 0)
            hcf = i;
    }

    printf("HCF (GCD) of %d and %d is: %d\n", num1, num2, hcf);
    return 0;
}

