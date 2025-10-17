#include <stdio.h>

int main() {
    int n, remainder;
    long product = 1;
    int hasOdd = 0;
    scanf("%d", &n);
    while (n != 0) {
        remainder = n % 10;
        if (remainder % 2 != 0) {
            product *= remainder;
            hasOdd = 1;
        }
        n /= 10;
    }
    if (!hasOdd)
        product = 1;
    printf("%ld", product);

    return 0;
}
