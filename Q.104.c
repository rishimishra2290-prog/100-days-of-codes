#include <stdio.h>

int main() {
    int n, x = -1, i;
    int total, leftSum;

    printf("Name - Rishi Mishra\nSAP_ID - 590028214\nCourse- BCA\nBatch - B5\n");
    printf("--------------------------------\n");

    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    total = n * (n + 1) / 2;

    for (i = 1; i <= n; i++) {
        leftSum = i * (i + 1) / 2;
        if (leftSum == total - (i - 1) * i / 2) {
            x = i;
            break;
        }
    }

    printf("%d\n", x);

    return 0;
}

