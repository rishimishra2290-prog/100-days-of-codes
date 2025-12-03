#include <stdio.h>

int main() {printf("Name - Rishi Mishra\nSAP_ID - 590028214\nCourse- BCA\nBatch - B5\n");
 printf("--------------------------------\n"); 
    int i, j, space;
    
    for (i = 5; i >= 1; i--) {
    
        for (space = 5; space > i; space--) {
            printf(" ");
        }

        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

