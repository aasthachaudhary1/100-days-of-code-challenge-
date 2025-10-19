#include <stdio.h>
#include <math.h>

int main() {
    int n, firstDigit, lastDigit, digits, middlePart, newNum;
    scanf("%d", &n);

    lastDigit = n % 10;             
    digits = log10(n);               
    firstDigit = n / pow(10, digits); 
    middlePart = n % (int)pow(10, digits);
    middlePart = middlePart / 10;
    newNum = lastDigit * pow(10, digits) + middlePart * 10 + firstDigit;

    printf("%d", newNum);
    return 0;
}
