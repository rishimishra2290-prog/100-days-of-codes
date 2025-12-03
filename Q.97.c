#include <stdio.h>

int main() {
    char str[200];
    int i;

    printf("Name - Rishi Mishra\nSAP_ID - 590028214\nCourse- BCA\nBatch - B5\n");
    printf("--------------------------------\n");

    printf("Enter full name: ");
    fgets(str, sizeof(str), stdin);

    if (str[0] != ' ')
        printf("%c", str[0]);

    for (i = 1; str[i] != '\0'; i++) {
        if (str[i] == ' ' && str[i+1] != ' ' && str[i+1] != '\0')
            printf("%c", str[i+1]);
    }

    printf("\n");

    return 0;
}

