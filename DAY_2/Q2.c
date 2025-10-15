#include <stdio.h>
#define PI 3.14  

int main() {
    float radius;
    float area, circumference;
    scanf("%f", &radius);
    area = PI * radius * radius;
    circumference = 2 * PI * radius;
    printf("Area=%.2f, Circumference=%.2f\n", area, circumference);

    return 0;
}
