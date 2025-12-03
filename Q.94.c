#include <stdio.h>

int main() {
    char str[1000], longest[1000], current[1000];
    int i, j = 0, maxLen = 0, curLen = 0;

    printf("Name - Rishi Mishra\nSAP_ID - 590028214\nCourse- BCA\nBatch - B5\n");
    printf("--------------------------------\n");

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && str[i] != '\n') {
            current[j++] = str[i];
            curLen++;
        } else {
            current[j] = '\0';
            if (curLen > maxLen) {
                maxLen = curLen;
                int k;
                for (k = 0; current[k] != '\0'; k++) {
                    longest[k] = current[k];
                }
                longest[k] = '\0';
            }
            j = 0;
            curLen = 0;
        }
    }

    printf("Longest word: %s\n", longest);
    printf("Length: %d\n", maxLen);

    return 0;
}

