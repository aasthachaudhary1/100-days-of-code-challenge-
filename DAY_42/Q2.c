Q84: Convert a lowercase string to uppercase without using built-in functions.

#include <stdio.h>

int main() {
    char str[1000];
    int i;

    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if(str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A');  
        }
    }

    printf("%s", str);
    return 0;
}
