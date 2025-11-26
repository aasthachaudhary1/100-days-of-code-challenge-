#include <stdio.h>
int firstOccurrence(int nums[], int n, int target) {
    int left = 0, right = n - 1, ans = -1;

    while (left <= right) {
        int mid = (left + right) / 2;

        if (nums[mid] == target) {
            ans = mid;          
            right = mid - 1;    
        }
        else if (nums[mid] > target)
            right = mid - 1;
        else
            left = mid + 1;
    }
    return ans;
}
int lastOccurrence(int nums[], int n, int target) {
    int left = 0, right = n - 1, ans = -1;

    while (left <= right) {
        int mid = (left + right) / 2;

        if (nums[mid] == target) {
            ans = mid;          
            left = mid + 1;     
        }
        else if (nums[mid] > target)
            right = mid - 1;
        else
            left = mid + 1;
    }
    return ans;
}

int main() {
    int nums[] = {5,7,
