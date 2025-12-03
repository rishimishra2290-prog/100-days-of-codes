#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    printf("Name - Rishi Mishra\nSAP_ID - 590028214\nCourse- BCA\nBatch - B5\n");
    printf("--------------------------------\n");

    char str[1000];
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);
    int capitalize = 1;

    for(int i = 0; i < len; i++) {
        if(isalpha(str[i])) {
            if(capitalize) {
                str[i] = toupper(str[i]);
                capitalize = 0;
            } else {
                str[i] = tolower(str[i]);
            }
        }
        if(str[i] == '.' || str[i] == '!' || str[i] == '?') {
            capitalize = 1;
        }
    }

    printf("%s", str);
    return 0;
}

