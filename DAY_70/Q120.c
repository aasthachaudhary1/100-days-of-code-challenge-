Q120: Write a program to take a string input. Change it to sentence case.

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);  

    int n = strlen(str);
    if(n > 0 && isalpha(str[0]))
        str[0] = toupper(str[0]);
    for(int i = 1; i < n; i++) {
        if(str[i-1] == ' ' && isalpha(str[i])) {
            str[i] = toupper(str[i]);
        }
    }

    printf("%s", str);

    return 0;
}
