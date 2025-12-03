#include <stdio.h>

int main() { printf("Name - Rishi Mishra\nSAP_ID - 590028214\nCourse- BCA\nBatch - B5\n");
 printf("--------------------------------\n"); 
    int n, i;
    long long product = 1;  
    int foundEven = 0;      

    // Input the value of n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculate product of even numbers
    for (i = 2; i <= n; i += 2) {
        product *= i;
        foundEven = 1;
    }

    if (foundEven)
        printf("Product of even numbers from 1 to %d = %lld\n", n, product);
    else
        printf("No even numbers found between 1 and %d.\n", n);

    return 0;
}

