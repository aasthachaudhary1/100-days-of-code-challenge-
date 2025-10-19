#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    int positive = 0, negative = 0, zero = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] > 0)
            positive++;
        else if (arr[i] < 0)
            negative++;
        else
            zero++;
    }

    printf("Positive=%d, Negative=%d, Zero=%d", positive, negative, zero);

    return 0;
}
