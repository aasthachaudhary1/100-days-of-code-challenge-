#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int a[100][100];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            scanf("%d", &a[i][j]);
    for(int s = 0; s <= n + m - 2; s++) {
        if(s % 2 == 1) {
            for(int i = 0; i < n; i++) {
                int j = s - i;
                if(j >= 0 && j < m)
                    printf("%d ", a[i][j]);
            }
        }
        else {
            for(int i = n - 1; i >= 0; i--) {
                int j = s - i;
                if(j >= 0 && j < m)
                    printf("%d ", a[i][j]);
            }
        }
    }

    return 0;
}
