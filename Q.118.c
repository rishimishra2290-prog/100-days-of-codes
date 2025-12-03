#include <stdio.h>

int main() {
    printf("Name - Rishi Mishra\nSAP_ID - 590028214\nCourse- BCA\nBatch - B5\n");
    printf("--------------------------------\n");

    int n;
    scanf("%d", &n);
    int arr[n - 1];
    for(int i = 0; i < n - 1; i++) scanf("%d", &arr[i]);

    int total = n * (n + 1) / 2;
    int sum = 0;
    for(int i = 0; i < n - 1; i++) sum += arr[i];

    printf("%d", total - sum);
    return 0;
}

