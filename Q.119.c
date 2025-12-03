#include <stdio.h>

int main() {
    printf("Name - Rishi Mishra\nSAP_ID - 590028214\nCourse- BCA\nBatch - B5\n");
    printf("--------------------------------\n");

    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);

    int result = 0;
    for(int i = 0; i < n; i++) {
        result ^= arr[i];
    }
    for(int i = 1; i < n; i++) {
        result ^= i;
    }

    printf("%d", result);
    return 0;
}

