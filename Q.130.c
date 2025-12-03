#include <stdio.h>

int main() {
    printf("Name - Rishi Mishra\nSAP_ID - 590028214\nCourse- BCA\nBatch - B5\n");
    printf("--------------------------------\n");

    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    FILE *fp = fopen("students.txt", "w");
    if(fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    for(int i = 0; i < n; i++) {
        char name[50];
        int roll;
        float marks;

        getchar(); // consume newline
        printf("Enter name: ");
        fgets(name, sizeof(name), stdin);

        printf("Enter roll number: ");
        scanf("%d", &roll);

        printf("Enter marks: ");
        scanf("%f", &marks);

        fprintf(fp, "%s%d %.2f\n", name, roll, marks);
    }

    fclose(fp);

    fp = fopen("students.txt", "r");
    if(fp == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    printf("\nStudent Records:\n");
    char name[50];
    int roll;
    float marks;

    while(fgets(name, sizeof(name), fp) != NULL) {
        fscanf(fp, "%d %f\n", &roll, &marks);
        printf("Name: %sRoll Number: %d, Marks: %.2f\n", name, roll, marks);
    }

    fclose(fp);
    return 0;
}

