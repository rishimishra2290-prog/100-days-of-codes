#include <stdio.h>

int main() {printf("Name - Rishi Mishra\nSAP_ID - 590028214\nCourse- BCA\nBatch - B5\n");
 printf("--------------------------------\n"); 
    char a;
    double num1, num2, result;

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &a);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    switch (a){
        case '+':
            result = num1 + num2;
            printf("Result = %.2lf\n", result);
            break;

        case '-':
            result = num1 - num2;
            printf("Result = %.2lf\n", result);
            break;

        case '*':
            result = num1 * num2;
            printf("Result = %.2lf\n", result);
            break;

        case '/':
            if (num2 != 0)
                printf("Result = %.2lf\n", num1 / num2);
            else
                printf("Error! Division by zero.\n");
            break;

        case '%':
            if ((int)num2 != 0) {
                int a = (int)num1;
                int b = (int)num2;
                printf("Result = %d\n", a % b);
            } else
                printf("Error! Division by zero in modulus.\n");
            break;

        default:
            printf("Invalid operator! Please use +, -, *, /, or %%.\n");
    }

    return 0;
}

