#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    float sum = 0.0;

    for (int k = 1; k <= n; k++) {
        float term = (float)(2*k) / (4*k - 1);
        sum += term;
    }

    printf("Approximate sum: %.2f", sum);
    return 0;
}
