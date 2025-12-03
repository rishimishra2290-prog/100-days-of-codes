#include <stdio.h>

int main() {
    char str[200];
    int i, startSurname = 0;

    printf("Name - Rishi Mishra\nSAP_ID - 590028214\nCourse- BCA\nBatch - B5\n");
    printf("--------------------------------\n");

    printf("Enter full name: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' && str[i+1] != ' ' && str[i+1] != '\0')
            startSurname = i + 1;
    }

    for (i = 0; str[i] != '\0' && i < startSurname; i++) {
        if (i == 0 && str[i] != ' ')
            printf("%c. ", str[i]);
        if (str[i] == ' ' && str[i+1] != ' ')
            printf("%c. ", str[i+1]);
    }

    printf("%s", &str[startSurname]);

    return 0;
}

