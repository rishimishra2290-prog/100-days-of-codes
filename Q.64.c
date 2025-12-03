#include <stdio.h>

int main() {
    printf("Name - Rishi Mishra\nSAP_ID - 590028214\nCourse- BCA\nBatch - B5\n");
    printf("--------------------------------\n");

    long long num;
    int freq[10] = {0}, digit, max = 0, maxDigit = 0;

    printf("Enter an integer: ");
    scanf("%lld", &num);

    if (num < 0) num = -num;

    while (num > 0) {
        digit = num % 10;
        freq[digit]++;
        num /= 10;
    }

    for (int i = 0; i < 10; i++) {
        if (freq[i] > max) {
            max = freq[i];
            maxDigit = i;
        }
    }

    printf("Digit occurring the most times: %d\n", maxDigit);

    return 0;
}

