#include <stdio.h>

int main() {
    int n, i, candidate, count = 0, freq = 0;

    printf("Name - Rishi Mishra\nSAP_ID - 590028214\nCourse- BCA\nBatch - B5\n");
    printf("--------------------------------\n");

    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[n];

    printf("Enter array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    for (i = 0; i < n; i++) {
        if (count == 0) {
            candidate = nums[i];
            count = 1;
        } else if (nums[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    for (i = 0; i < n; i++) {
        if (nums[i] == candidate)
            freq++;
    }

    if (freq > n / 2)
        printf("%d\n", candidate);
    else
        printf("-1\n");

    return 0;
}

