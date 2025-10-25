Q98: Print initials of a name with the surname displayed in full.

#include <stdio.h>
#include <string.h>
int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);

    int i = 0, len = 0;
    while (str[len] != '\0' && str[len] != '\n') len++;
    while (i < len) {
        if (i == 0 && str[i] != ' ') {
            printf("%c.", str[i]); 
        }
        if (str[i] == ' ' && i+1 < len && str[i+1] != ' ') {
            int j = i+1, spaceCount = 0;
            while (j < len) {
                if (str[j] == ' ') spaceCount++;
                j++;
            }
            if (spaceCount > 0) {
                printf("%c.", str[i+1]);
            } else {
                printf(" "); 
            }
        }
        i++;
    }
    i = len - 1;
    while (i >= 0 && str[i] != ' ') i--; 
    for (int j = i+1; j < len; j++)
        printf("%c", str[j]);

    return 0;
}
