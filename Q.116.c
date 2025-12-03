#include <stdio.h>

int main() {
    printf("Name - Rishi Mishra\nSAP_ID - 590028214\nCourse- BCA\nBatch - B5\n");
    printf("--------------------------------\n");

    int n, target;
    scanf("%d", &n);
    int nums[n];
    for(int i = 0; i < n; i++) scanf("%d", &nums[i]);
    scanf("%d", &target);

    int i, j, found = 0;
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(nums[i] + nums[j] == target) {
                printf("%d %d", i, j);
                found = 1;
                break;
            }
        }
        if(found) break;
    }

    if(!found) printf("-1 -1");

    return 0;
}

