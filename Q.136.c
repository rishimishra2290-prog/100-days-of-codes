#include <stdio.h>

int main() {
    printf("Name - Rishi Mishra\nSAP_ID - 590028214\nCourse- BCA\nBatch - B5\n");
    printf("--------------------------------\n");

    enum Menu {ADD = 1, SUBTRACT, MULTIPLY};
    int choice;
    int a, b;

    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Menu:\n1. ADD\n2. SUBTRACT\n3. MULTIPLY\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case ADD:
            printf("Result: %d\n", a + b);
            break;
        case SUBTRACT:
            printf("Result: %d\n", a - b);
            break;
        case MULTIPLY:
            printf("Result: %d\n", a * b);
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}

