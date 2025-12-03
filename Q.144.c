#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

void printStudent(struct Student s) {
    printf("Name: %s\n", s.name);
    printf("Roll Number: %d\n", s.roll_no);
    printf("Marks: %.2f\n", s.marks);
}

int main() {
    printf("Name - Rishi Mishra\nSAP_ID - 590028214\nCourse- BCA\nBatch - B5\n");
    printf("--------------------------------\n");

    struct Student s;

    printf("Enter student details:\n");
    printf("Name: ");
    scanf("%s", s.name);
    printf("Roll Number: ");
    scanf("%d", &s.roll_no);
    printf("Marks: ");
    scanf("%f", &s.marks);

    printf("\nStudent Details:\n");
    printStudent(s);

    return 0;
}

