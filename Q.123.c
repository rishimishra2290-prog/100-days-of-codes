#include <stdio.h>
#include <ctype.h>

int main() {
    printf("Name - Rishi Mishra\nSAP_ID - 590028214\nCourse- BCA\nBatch - B5\n");
    printf("--------------------------------\n");

    FILE *fp = fopen("info.txt", "r");
    if(fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    int characters = 0, words = 0, lines = 0;
    char ch;
    int inWord = 0;

    while((ch = fgetc(fp)) != EOF) {
        characters++;

        if(ch == '\n') lines++;

        if(isspace(ch)) {
            inWord = 0;
        } else if(!inWord) {
            inWord = 1;
            words++;
        }
    }

    if(characters > 0 && ch != '\n') lines++; // count last line if no newline at EOF

    printf("Total Characters: %d\n", characters);
    printf("Total Words: %d\n", words);
    printf("Total Lines: %d\n", lines);

    fclose(fp);
    return 0;
}

