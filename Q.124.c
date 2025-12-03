#include <stdio.h>

int main() {
    printf("Name - Rishi Mishra\nSAP_ID - 590028214\nCourse- BCA\nBatch - B5\n");
    printf("--------------------------------\n");

    char source[100], dest[100];
    printf("Enter source file name: ");
    scanf("%s", source);
    printf("Enter destination file name: ");
    scanf("%s", dest);

    FILE *src = fopen(source, "r");
    if(src == NULL) {
        printf("Error opening source file!\n");
        return 1;
    }

    FILE *dst = fopen(dest, "w");
    if(dst == NULL) {
        printf("Error opening destination file!\n");
        fclose(src);
        return 1;
    }

    char ch;
    while((ch = fgetc(src)) != EOF) {
        fputc(ch, dst);
    }

    printf("File copied successfully.\n");

    fclose(src);
    fclose(dst);
    return 0;
}

