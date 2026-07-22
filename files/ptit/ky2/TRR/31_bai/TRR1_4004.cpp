#include <stdio.h>

int n;
int c[11][11];
int x[11];
int used[11];
int best[11];

int max = 0;
void Try(int i, int sum) {
    int j;
    if (i > n) {
        if (sum > max) {
            max = sum;
            for (j = 1; j <= n; j++)
                best[j] = x[j];
        }
        return;
    }
    for (j = 1; j <= n; j++) {
        if (used[j] == 0) {
            used[j] = 1;
            x[i] = j;
            Try(i + 1, sum + c[i][j]);
            used[j] = 0;
        }
    }
}

int main() {
    int i, j;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            scanf("%d", &c[i][j]);
        }
    }
    Try(1, 0);
    printf("%d\n", max);
    for (i = 1; i <= n; i++) {
        if (i > 1)
            printf(" ");
        printf("%d", best[i]);
    }
    return 0;
}
