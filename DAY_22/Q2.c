#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    float sum = 0.0;

    for (int k = 1; k <= n; k++) {
        float term = (float)(2*k - 1) / (2*k);
        sum += term;
    }

    printf("Approximate sum: %.1f", sum);
    return 0;
}
