#include <stdio.h>

int main() {
    char str[1000], ch;
    int i, freq = 0;

    printf("Name - Rishi Mishra\nSAP_ID - 590028214\nCourse- BCA\nBatch - B5\n");
    printf("--------------------------------\n");

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter the character to find frequency: ");
    scanf("%c", &ch);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            freq++;
        }
    }

    printf("Frequency of '%c' = %d\n", ch, freq);

    return 0;
}

