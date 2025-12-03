#include <stdio.h>

int main() {
    printf("Name - Rishi Mishra\nSAP_ID - 590028214\nCourse- BCA\nBatch - B5\n");
    printf("--------------------------------\n");

    enum Status {SUCCESS, FAILURE, TIMEOUT};
    enum Status s;

    for(s = SUCCESS; s <= TIMEOUT; s++) {
        switch(s) {
            case SUCCESS: printf("SUCCESS - Operation completed successfully.\n"); break;
            case FAILURE: printf("FAILURE - Operation failed.\n"); break;
            case TIMEOUT: printf("TIMEOUT - Operation timed out.\n"); break;
        }
    }

    return 0;
}

