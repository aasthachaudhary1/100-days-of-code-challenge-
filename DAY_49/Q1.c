Q97: Print the initials of a name.

#include <stdio.h>
int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);

    int i = 0;
    if (str[i] != ' ' && str[i] != '\n') {
        printf("%c.", str[i]);
    }
    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] == ' ' && str[i+1] != ' ' && str[i+1] != '\0' && str[i+1] != '\n') {
            printf("%c.", str[i+1]);
        }
        i++;
    }

    return 0;
}
