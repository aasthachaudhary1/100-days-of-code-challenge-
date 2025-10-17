#include <stdio.h>

int main() {
    int a, b, tempA, tempB, remainder;
    scanf("%d %d", &a, &b);

    tempA = a;
    tempB = b;

    while (tempB != 0) {
        remainder = tempA % tempB;
        tempA = tempB;
        tempB = remainder;
    }
    printf("%d", tempA);

    return 0;
}
