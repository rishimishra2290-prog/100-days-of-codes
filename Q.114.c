#include <stdio.h>
#include <string.h>

int main() {
    printf("Name - Rishi Mishra\nSAP_ID - 590028214\nCourse- BCA\nBatch - B5\n");
    printf("--------------------------------\n");

    char s[1000];
    scanf("%s", s);

    int n = strlen(s);
    int last[256];
    for(int i = 0; i < 256; i++) last[i] = -1;

    int max_len = 0, start = 0;

    for(int i = 0; i < n; i++) {
        if(last[(unsigned char)s[i]] >= start)
            start = last[(unsigned char)s[i]] + 1;

        last[(unsigned char)s[i]] = i;

        if(i - start + 1 > max_len)
            max_len = i - start + 1;
    }

    printf("%d", max_len);
    return 0;
}

