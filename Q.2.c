#include <stdio.h>

int main() {printf("Name - Rishi Mishra\nSAP_ID - 590028214\nCourse- BCA\nBatch - B5\n");
 printf("--------------------------------\n"); 
    int num1, num2;
    
    // Input two numbers
    printf("Enter first number: ");
    scanf("%f", &num1);
    
    printf("Enter second number: ");
    scanf("%f", &num2);
    
    // Perform arithmetic operations
    printf("\nResults of Arithmetic Operations:\n");
    printf("Addition: %.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
    printf("Subtraction: %.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
    printf("Multiplication: %.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
    
    // Check division by zero
    if (num2 != 0) {
        printf("Division: %.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
    } else {
        printf("Division: Not defined (division by zero).\n");
    }
    
    return 0;
}

