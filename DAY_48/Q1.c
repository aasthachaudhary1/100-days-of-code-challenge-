Q95: Check if one string is a rotation of another.

#include <stdio.h>
int main() {
    char s1[1000], s2[1000], cat[2000];
    int i, j, k, len1 = 0, len2 = 0, found = 0;

    fgets(s1, sizeof(s1), stdin);
    fgets(s2, sizeof(s2), stdin);
    while (s1[len1] != '\0' && s1[len1] != '\n') len1++;
    while (s2[len2] != '\0' && s2[len2] != '\n') len2++;

    if (len1 != len2) {
        printf("Not rotation");
        return 0;
    }
    for (i = 0; i < len1; i++) cat[i] = s1[i];
    for (i = 0; i < len1; i++) cat[len1 + i] = s1[i];
    cat[2*len1] = '\0';
    for (i = 0; i <= 2*len1 - len2; i++) {
        for (j = 0; j < len2; j++) {
            if (cat[i+j] != s2[j])
                break;
        }
        if (j == len2) {
            found = 1;
            break;
        }
    }

    if (found)
        printf("Rotation");
    else
        printf("Not rotation");

    return 0;
}
