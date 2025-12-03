#include <stdio.h>
#include <ctype.h>

int main() {
    printf("Name - Rishi Mishra\nSAP_ID - 590028214\nCourse- BCA\nBatch - B5\n");
    printf("--------------------------------\n");

    FILE *in = fopen("input.txt", "r");
    if(in == NULL) {
        printf("Error opening input file!\n");
        return 1;
    }

    FILE *out = fopen("output.txt", "w");
    if(out == NULL) {
        printf("Error opening output file!\n");
        fclose(in);
        return 1;
    }

    char ch;
    while((ch = fgetc(in)) != EOF) {
        fputc(toupper(ch), out);
    }

    printf("Text converted to uppercase and written to output.txt\n");

    fclose(in);
    fclose(out);
    return 0;
}

