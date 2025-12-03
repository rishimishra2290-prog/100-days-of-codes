#include <stdio.h>

int main() {
    char str[1000], result[1000];
    int i, j = 0;

    printf("Name - Rishi Mishra\nSAP_ID - 590028214\nCourse- BCA\nBatch - B5\n");
    printf("--------------------------------\n");

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' ||
            str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U') {
        } else {
            result[j] = str[i];
            j++;
        }
    }

    result[j] = '\0';

    printf("String without vowels: %s", result);

    return 0;
}

