Q86: Check if a string is a palindrome.

#include <stdio.h>

int main() {
    char str[1000];
    int left = 0, right = 0, isPalindrome = 1;

    fgets(str, sizeof(str), stdin);
    while (str[right] != '\0' && str[right] != '\n') {
        right++;
    }
    right--;

    while (left < right) {
        if (str[left] != str[right]) {
            isPalindrome = 0;
            break;
        }
        left++;
        right--;
    }

    if (isPalindrome)
        printf("Palindrome");
    else
        printf("Not palindrome");

    return 0;
}
