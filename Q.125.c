#include <stdio.h>

int main() {
    printf("Name - Rishi Mishra\nSAP_ID - 590028214\nCourse- BCA\nBatch - B5\n");
    printf("--------------------------------\n");

    char filename[100];
    printf("Enter file name: ");
    scanf("%s", filename);

    FILE *fp = fopen(filename, "a");
    if(fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    char text[1000];
    getchar(); // consume leftover newline
    printf("Enter the text to append: ");
    fgets(text, sizeof(text), stdin);

    fprintf(fp, "%s", text);
    printf("Text appended successfully.\n");

    fclose(fp);
    return 0;
}

