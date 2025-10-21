#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int a[100][100];
    int diag[100];  
    int k = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    if(n != m) {
        printf("False");
        return 0;
    }
    for(int i = 0; i < n; i++) {
        diag[k++] = a[i][i];
    }
    for(int i = 0; i < k; i++) {
        for(int j = i + 1; j < k; j++) {
            if(diag[i] == diag[j]) {
                printf("False");
                return 0;
            }
        }
    }

    printf("True");
    return 0;
}
