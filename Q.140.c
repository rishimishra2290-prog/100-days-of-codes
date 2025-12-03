#include <stdio.h>

int main() {
    printf("Name - Rishi Mishra\nSAP_ID - 590028214\nCourse- BCA\nBatch - B5\n");
    printf("--------------------------------\n");

    enum Gender {
        MALE,
        FEMALE,
        OTHER
    };

    struct Person {
        char name[50];
        enum Gender gender;
    };

    struct Person p1 = {"Alice", FEMALE};

    printf("Person's Name: %s\n", p1.name);
    printf("Person's Gender (Enum Value): %d\n", p1.gender);

    if (p1.gender == MALE) {
        printf("Person's Gender (String): MALE\n");
    } else if (p1.gender == FEMALE) {
        printf("Person's Gender (String): FEMALE\n");
    } else if (p1.gender == OTHER) {
        printf("Person's Gender (String): OTHER\n");
    }

    return 0;
}
