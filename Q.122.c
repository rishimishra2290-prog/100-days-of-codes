#include <stdio.h>

int main() {
    printf("Name - Rishi Mishra\nSAP_ID - 590028214\nCourse- BCA\nBatch - B5\n");
    printf("--------------------------------\n");

    FILE *fp = fopen("info.txt", "r");
    if(fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    char line[256];
    while(fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }

    fclose(fp);
    return 0;
}

