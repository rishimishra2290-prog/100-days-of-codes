#include <stdio.h>

int main() {
    printf("Name - Rishi Mishra\nSAP_ID - 590028214\nCourse- BCA\nBatch - B5\n");
    printf("--------------------------------\n");

    FILE *fp = fopen("numbers.txt", "r");
    if(fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    int num, sum = 0, count = 0;
    while(fscanf(fp, "%d", &num) != EOF) {
        sum += num;
        count++;
    }

    if(count == 0) {
        printf("No numbers found in the file.\n");
    } else {
        double average = (double)sum / count;
        printf("Sum: %d\n", sum);
        printf("Average: %.2lf\n", average);
    }

    fclose(fp);
    return 0;
}

