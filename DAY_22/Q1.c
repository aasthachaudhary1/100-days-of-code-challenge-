#include <stdio.h>

int main() {
    int n, temp, rem;
    long long sum = 0;
    scanf("%d", &n);

    temp = n;  

    while (temp > 0) {
        rem = temp % 10;
        long long fact = 1;
        for (int i = 1; i <= rem; i++) {
            fact *= i;
        }

        sum += fact;
        temp /= 10;
    }

    if (sum == n)
        printf("Strong number");
    else
        printf("Not strong number");

    return 0;
}
