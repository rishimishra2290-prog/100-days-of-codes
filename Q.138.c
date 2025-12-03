#include <stdio.h>

int main() {
    printf("Name - Rishi Mishra\nSAP_ID - 590028214\nCourse- BCA\nBatch - B5\n");
    printf("--------------------------------\n");

    enum Status {SUCCESS, FAILURE, TIMEOUT};
    char *statusNames[] = {"SUCCESS", "FAILURE", "TIMEOUT"};

    for(int i = SUCCESS; i <= TIMEOUT; i++) {
        printf("%s = %d\n", statusNames[i], i);
    }

    return 0;
}

