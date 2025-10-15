#include <stdio.h>

int main() {
    int a, b;
    int sum, diff, product, quotient;

    // Input two numbers
    scanf("%d %d", &a, &b);

    // Calculations
    sum = a + b;
    diff = a - b;
    product = a * b;
    quotient = a / b;  // Integer division

    // Output
    printf("Sum=%d, Diff=%d, Product=%d, Quotient=%d\n", sum, diff, product, quotient);

    return 0;
}
