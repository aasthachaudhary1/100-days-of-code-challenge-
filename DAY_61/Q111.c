Q111: Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.
  #include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &k);
    int negIndex[n], front = 0, rear = 0;
    for(int i = 0; i < k; i++) {
        if(arr[i] < 0)
            negIndex[rear++] = i;
    }
    if(front == rear) printf("0 ");
    else printf("%d ", arr[negIndex[front]]);
    for(int i = k; i < n; i++) {
        if(front < rear && negIndex[front] <= i - k)
            front++;
        if(arr[i] < 0)
            negIndex[rear++] = i;
