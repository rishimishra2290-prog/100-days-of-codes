#include <stdio.h>
#include <string.h>

int main() {
    printf("Name - Rishi Mishra\nSAP_ID - 590028214\nCourse- BCA\nBatch - B5\n");
    printf("--------------------------------\n");

    char s[1000], t[1000];
    scanf("%s", s);
    scanf("%s", t);

    int freq[26] = {0};

    for(int i = 0; s[i] != '\0'; i++)
        freq[s[i] - 'a']++;

    for(int i = 0; t[i] != '\0'; i++)
        freq[t[i] - 'a']--;

    int flag = 1;
    for(int i = 0; i < 26; i++) {
        if(freq[i] != 0) {
            flag = 0;
            break;
        }
    }

    if(flag)
        printf("Anagram");
    else
        printf("Not Anagram");

    return 0;
}

