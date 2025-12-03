#include <stdio.h>
#include <ctype.h>

int main() {
    printf("Name - Rishi Mishra\nSAP_ID - 590028214\nCourse- BCA\nBatch - B5\n");
    printf("--------------------------------\n");

    FILE *fp = fopen("input.txt", "r");
    if(fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    char ch;
    int vowels = 0, consonants = 0;

    while((ch = fgetc(fp)) != EOF) {
        if(isalpha(ch)) {
            char lower = tolower(ch);
            if(lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    fclose(fp);
    return 0;
}

