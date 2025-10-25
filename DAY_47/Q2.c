Q94: Find the longest word in a sentence.

#include <stdio.h>
int main() {
    char str[1000];
    char longest[1000];
    int i = 0, j = 0, maxLen = 0;

    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0' && str[i] != '\n') {
        while (str[i] == ' ')
            i++;
        int start = i;
        while (str[i] != ' ' && str[i] != '\0' && str[i] != '\n')
            i++;
        int len = i - start;
        if (len > maxLen) {
            maxLen = len;
            for (j = 0; j < len; j++)
                longest[j] = str[start + j];
            longest[len] = '\0';
        }
    }

    printf("%s", longest);
    return 0;
}
