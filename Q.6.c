#include <stdio.h>

int main() {printf("Name - Rishi Mishra\nSAP_ID - 590028214\nCourse- BCA\nBatch - B5\n");
 printf("--------------------------------\n"); 
    int a, b, temp;

    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    printf("\nBefore swapping: a = %d, b = %d\n", a, b);

    // Swap using third variable
    temp = a;
    a = b;
    b = temp;
    
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}

