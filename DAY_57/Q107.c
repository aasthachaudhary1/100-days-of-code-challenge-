Q107: Write a program to take an array arr[] of integers as input, the task is to find the previous greater element for each element of the array in order of their appearance in the array. Previous greater element of an element in the array is the nearest element on the left which is greater than the current element. If there does not exist next greater of current element, then previous greater element for current element is -1.

N.B:
- Print the output for each element in a comma separated fashion.
- Do not use Stack, use brute force approach (nested loop) to solve.

#include <stdio.h>

int main() {
    int arr[] = {1, 3, 2, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result[n];

    for (int i = 0; i < n; i++) {
        int prev = -1;

        // search on the left side
        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                prev = arr[j];
                break;   
            }
        }
        result[i] = prev;
    }
    for (int i = 0; i < n; i++) {
        if (i == n - 1)
            printf("%d", result[i]);
        else
            printf("%d, ", result[i]);
    }

    return 0;
}
