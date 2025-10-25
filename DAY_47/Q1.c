Q93: Check if two strings are anagrams of each other.

#include <stdio.h>
int main() {
    char s1[1000], s2[1000];
    int freq[256] = {0};
    int i;

    fgets(s1, sizeof(s1), stdin);
    fgets(s2, sizeof(s2), stdin);
    for (i = 0; s1[i] != '\0' && s1[i] != '\n'; i++)
        freq[(unsigned char)s1[i]]++;
    for (i = 0; s2[i] != '\0' && s2[i] != '\n'; i++)
        freq[(unsigned char)s2[i]]--;
    for (i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            printf("Not anagrams");
            return 0;
        }
    }

    printf("Anagrams");
    return 0;
}
