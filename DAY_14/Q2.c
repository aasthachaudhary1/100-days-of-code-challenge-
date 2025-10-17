#include <stdio.h>

int main() {
    int n;
    int product = 1;
    scanf("%d", &n);
    for (int i = 2; i <= n; i += 2) {
        product *= i;
    }
    if (n < 2)
        printf("0");
    else
        printf("%d", product);

    return 0;
}
