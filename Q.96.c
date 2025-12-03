#include <stdio.h>

int main() {
    char str[1000], result[1000];
    int i, start = 0, end = 0, rIndex = 0;

    printf("Name - Rishi Mishra\nSAP_ID - 590028214\nCourse- BCA\nBatch - B5\n");
    printf("--------------------------------\n");

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' || str[i] == '\n') {
            end = i - 1;
            int k;
            for (k = end; k >= start; k--) {
                result[rIndex++] = str[k];
            }
            if (str[i] == ' ') result[rIndex++] = ' ';
            start = i + 1;
        }
    }

    result[rIndex] = '\0';

    printf("Output: %s", result);

    return 0;
}

