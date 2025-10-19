#include <stdio.h>

int main() {
    long long n;
    scanf("%lld", &n);
    if(n < 0) n = -n;

    int freq[10] = {0}; 
    while(n > 0) {
        int d = n % 10;
        freq[d]++;
        n /= 10;
    }
    int maxDigit = 0, maxFreq = freq[0];
    for(int i = 1; i < 10; i++) {
        if(freq[i] > maxFreq) {
            maxFreq = freq[i];
            maxDigit = i;
        }
    }

    printf("%d", maxDigit);
    return 0;
}
