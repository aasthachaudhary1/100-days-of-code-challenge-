#include <stdio.h>

int main() {
    for (int row = 1; row <= 5; row++) {
        for (int s = 1; s <= 5-row; s++) {
            printf(" ");
        }
        for (int num = 6-row; num <= 5; num++) {
            printf("%d", num);
        }

        printf("\n");
    }
    return 0;
}
