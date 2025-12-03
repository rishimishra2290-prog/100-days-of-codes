#include <stdio.h>

int main() {
    printf("Name - Rishi Mishra\nSAP_ID - 590028214\nCourse- BCA\nBatch - B5\n");
    printf("--------------------------------\n");

    char filename[100];
    printf("Enter the file name: ");
    scanf("%s", filename);

    FILE *fp = fopen(filename, "r");
    if(fp == NULL) {
        printf("Error: File does not exist!\n");
        return 1;
    }

    char ch;
    while((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    fclose(fp);
    return 0;
}

