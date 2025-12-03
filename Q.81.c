#include <stdio.h>

int main() {
    char str[1000];
    int count = 0, i;

    printf("Name - Rishi Mishra\nSAP_ID - 590028214\nCourse- BCA\nBatch - B5\n");
    printf("--------------------------------\n");

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        count++;
    }

    count--; 

    printf("Total characters = %d\n", count);

    return 0;
}

