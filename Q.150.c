#include <stdio.h>

struct Student {
    int id;
    float marks;
    char name[20];
};

int main() {

    printf("Name - Rishi Mishra\nSAP_ID - 590028214\nCourse- BCA\nBatch - B5\n");
    printf("--------------------------------\n");

    struct Student s;          
    struct Student *ptr;       

    ptr = &s;                  

    printf("Enter ID: ");
    scanf("%d", &ptr->id);

    printf("Enter Marks: ");
    scanf("%f", &ptr->marks);

    printf("Enter Name: ");
    scanf("%s", ptr->name);

    printf("\n--- Student Details ---\n");
    printf("ID: %d\n", ptr->id);
    printf("Name: %s\n", ptr->name);
    printf("Marks: %.2f\n", ptr->marks);

    return 0;
}

