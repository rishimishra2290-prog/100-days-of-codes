#include <stdio.h>

int main() { printf("Name - Rishi Mishra\nSAP_ID - 590028214\nCourse- BCA\nBatch - B5\n");
 printf("--------------------------------\n"); 
    int num;
    int binary[32];  // To store binary digits (for 32-bit integer)
    int i = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Handle the special case for 0
    if (num == 0) {
        printf("Binary representation: 0\n");
        return 0;
    }

    // Convert to binary
    while (num > 0) {
        binary[i] = num % 2;
        num = num / 2;
        i++;
    }

    printf("Binary representation: ");
    // Print binary digits in reverse order
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");

    return 0;
}

