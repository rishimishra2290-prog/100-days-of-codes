#include <stdio.h>

int main() {printf("Name - Rishi Mishra\nSAP_ID - 590028214\nCourse- BCA\nBatch - B5\n");
 printf("--------------------------------\n"); 
    int num1, num2, num3;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 >= num2 && num1 >= num3) {
        printf("%d is the largest number.\n", num1);
    }
    else if (num2 >= num1 && num2 >= num3) {
        printf("%d is the largest number.\n", num2);
    }
    else {
        printf("%d is the largest number.\n", num3);
    }

    return 0;
}

