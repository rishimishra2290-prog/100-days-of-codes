#include <stdio.h>

int main() {
    char date[20], result[20];
    int i, j = 0;

    printf("Name - Rishi Mishra\nSAP_ID - 590028214\nCourse- BCA\nBatch - B5\n");
    printf("--------------------------------\n");

    printf("Enter date in dd/04/yyyy format: ");
    fgets(date, sizeof(date), stdin);

    for (i = 0; i < 3; i++) {
        result[j++] = date[i];
    }

    result[j++] = 'A';
    result[j++] = 'p';
    result[j++] = 'r';
    result[j++] = '-';

    for (i = 6; date[i] != '\0'; i++) {
        result[j++] = date[i];
    }

    result[j] = '\0';

    printf("Converted date: %s", result);

    return 0;
}

