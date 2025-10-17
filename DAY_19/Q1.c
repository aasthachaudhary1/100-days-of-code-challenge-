#include <stdio.h>

int main() {
    int a, b, hcf, tempA, tempB, remainder;
    long lcm;
    scanf("%d %d", &a, &b);

    tempA = a;
    tempB = b;

    while (tempB != 0) {
        remainder = tempA % tempB;
        tempA = tempB;
        tempB = remainder;
    }
    hcf = tempA;
    lcm = (long)a * b / hcf;
    printf("%ld", lcm);

    return 0;
}
