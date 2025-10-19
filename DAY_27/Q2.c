#include <stdio.h>

int main() {
    int i, j, spaces, stars;
    for (stars = 1; stars <= 7; stars += 2) {
        spaces = (7 - stars) / 2;
        for (j = 1; j <= spaces; j++)
            printf(" ");
        for (j = 1; j <= stars; j++)
            printf("*");
        printf("\n");
    }
    for (stars = 5; stars >= 1; stars -= 2) {
        spaces = (7 - stars) / 2;
        for (j = 1; j <= spaces; j++)
            printf(" ");
        for (j = 1; j <= stars; j++)
            printf("*");
        printf("\n");
    }

    return 0;
}
