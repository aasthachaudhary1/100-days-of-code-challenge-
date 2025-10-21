#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int a[100][100];
    int sum = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    if(n != m) {
        printf("Not a square matrix");
        return 0;
    }
    for(int i = 0; i < n; i++) {
        sum += a[i][i];
    }

    printf("%d", sum);
    return 0;
}
