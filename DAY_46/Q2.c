Q92: Find the first repeating lowercase alphabet in a string.

#include <stdio.h>
int main() {
    char str[1000];
    int freq[26] = {0};  

    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        char ch = str[i];

        if (ch >= 'a' && ch <= 'z') {   
            if (freq[ch - 'a'] == 1) { 
                printf("%c", ch);
                return 0;
            }
            freq[ch - 'a']++;
        }
    }
    printf("-1");
    return 0;
}
