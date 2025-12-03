#include <stdio.h>
#include <string.h>

int main() { printf("Name - Rishi Mishra\nSAP_ID - 590028214\nCourse- BCA\nBatch - B5\n"); printf("--------------------------------\n"); 
    char binary[100];
    int i;

    printf("Enter a binary number: ");
    scanf("%s", binary);

    for (i = 0; i < strlen(binary); i++) {
        if (binary[i] == '0')
            binary[i] = '1';
        else if (binary[i] == '1')
            binary[i] = '0';
        else {
            printf("Invalid binary digit detected!\n");
            return 1;
        }
    }

    printf("1's Complement = %s\n", binary);
    return 0;
}

