Q115: Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".

#include <stdio.h>
#include <string.h>

int main() {
    char s[1000], t[1000];
    scanf("%s %s", s, t);

    int n = strlen(s);
    int m = strlen(t);

    if (n != m) {
        printf("Not Anagram");
        return 0;
    }

    int count[26] = {0};  

    for (int i = 0; i < n; i++) {
        count[s[i] - 'a']++;
        count[t[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            printf("Not Anagram");
            return 0;
        }
    }

    printf("Anagram");
    return 0;
}
