#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

struct Student getTopStudent(struct Student students[], int n) {
    int maxIndex = 0;
    for(int i = 1; i < n; i++) {
        if(students[i].marks > students[maxIndex].marks) {
            maxIndex = i;
        }
    }
    return students[maxIndex];
}

int main() {
    printf("Name - Rishi Mishra\nSAP_ID - 590028214\nCourse- BCA\nBatch - B5\n");
    printf("--------------------------------\n");

    struct Student students[5];

    for(int i = 0; i < 5; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll Number: ");
        scanf("%d", &students[i].roll_no);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
        printf("\n");
    }

    struct Student top = getTopStudent(students, 5);

    printf("Top Student Details:\n");
    printf("Name: %s\n", top.name);
    printf("Roll Number: %d\n", top.roll_no);
    printf("Marks: %.2f\n", top.marks);

    return 0;
}

