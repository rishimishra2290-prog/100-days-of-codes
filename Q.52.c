#include <stdio.h>

int main() {printf("Name - Rishi Mishra\nSAP_ID - 590028214\nCourse- BCA\nBatch - B5\n");
 printf("--------------------------------\n"); 
    int i, j;

    for (i = 1; i <= 5; i++) {

        for (j = 1; j <= i; j++) {
            printf("*\n");
        }
        printf("\n"); 
    }

    return 0;
}

