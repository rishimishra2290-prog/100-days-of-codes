#include <stdio.h>

int main() {
    printf("Name - Rishi Mishra\nSAP_ID - 590028214\nCourse- BCA\nBatch - B5\n");
    printf("--------------------------------\n");

    int n, k;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    if(k > n) {
        printf("-1");
        return 0;
    }

    int maxSum = 0;
    for(int i = 0; i < k; i++) {
        maxSum += arr[i];
    }

    int windowSum = maxSum;

    for(int i = k; i < n; i++) {
        windowSum = windowSum - arr[i - k] + arr[i];
        if(windowSum > maxSum) maxSum = windowSum;
    }

    printf("%d", maxSum);

    return 0;
}

