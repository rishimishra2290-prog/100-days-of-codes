#include <stdio.h>

int main() {
    printf("Name - Rishi Mishra\nSAP_ID - 590028214\nCourse- BCA\nBatch - B5\n");
    printf("--------------------------------\n");

    enum Role {ADMIN, USER, GUEST};
    enum Role r;

    for(r = ADMIN; r <= GUEST; r++) {
        switch(r) {
            case ADMIN: printf("ADMIN - Full access granted.\n"); break;
            case USER: printf("USER - Limited access granted.\n"); break;
            case GUEST: printf("GUEST - View only access.\n"); break;
        }
    }

    return 0;
}

