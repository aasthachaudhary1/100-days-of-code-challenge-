#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time;
    float SI, CI;

    scanf("%f %f %f", &principal, &rate, &time);
    SI = (principal * rate * time) / 100;
    CI = principal * (pow((1 + rate / 100), time)) - principal;

    printf("Simple Interest=%.2f, Compound Interest=%.2f", SI, CI);
    return 0;
}
