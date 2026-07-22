#include <stdio.h>

int n;
int c[11][11];
int x[11];
int used[11];
int best[11];
int min = 1000000000;
void Try(int i, int sum) {
    if (i > n) {
        if (sum < min) {
            min = sum;

            for (int j = 1; j <= n; j++)
                best[j] = x[j];
        }
        return;
    }
    for (int j = 1; j <= n; j++) {
        if (used[j] == 0) {
            used[j] = 1;
            x[i] = j;
            Try(i + 1, sum + c[i][j]);
            used[j] = 0;
        }
    }
}

int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            scanf("%d", &c[i][j]);

    Try(1, 0);
    printf("%d\n", min);
    for (int i = 1; i <= n; i++) {
        if (i > 1)
            printf(" ");

        printf("%d", best[i]);
    }
    return 0;
}
