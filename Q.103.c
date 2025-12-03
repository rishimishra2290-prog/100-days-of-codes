#include <stdio.h>

int main() {
    int n, i, total = 0, leftSum = 0, pivot = -1;

    printf("Name - Rishi Mishra\nSAP_ID - 590028214\nCourse- BCA\nBatch - B5\n");
    printf("--------------------------------\n");

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        total += arr[i];
    }

    for (i = 0; i < n; i++) {
        if (leftSum == total - leftSum - arr[i]) {
            pivot = i;
            break;
        }
        leftSum += arr[i];
    }

    printf("%d\n", pivot);

    return 0;
}

