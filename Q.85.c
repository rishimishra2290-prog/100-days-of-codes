#include <stdio.h>

int main() {
    char str[1000], rev[1000];
    int i, len = 0;

    printf("Name - Rishi Mishra\nSAP_ID - 590028214\nCourse- BCA\nBatch - B5\n");
    printf("--------------------------------\n");

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        len++;
    }
    len--;

    for (i = 0; i < len; i++) {
        rev[i] = str[len - 1 - i];
    }
    rev[i] = '\0';

    printf("Reversed string: %s\n", rev);

    return 0;
}

