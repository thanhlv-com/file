#include <stdio.h>

int n;
int c[31][31];
int x[31];
int used[31];
int bestPath[31];
long long best = 1000000000000000000LL;
void Try(int i, long long cost) {
    int j;
    if (i > n) {
        cost = cost + c[x[n]][1];
        if (cost < best) {
            best = cost;

            for (j = 1; j <= n; j++)
                bestPath[j] = x[j];
        }
        return;
    }
    if (cost >= best)
        return;
    for (j = 2; j <= n; j++) {
        if (used[j] == 0) {
            used[j] = 1;
            x[i] = j;
            Try(i + 1, cost + c[x[i - 1]][j]);
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
    x[1] = 1;
    used[1] = 1;
    Try(2, 0);
    printf("%lld\n", best);
    for (i = 1; i <= n; i++) {
        if (i > 1)
            printf(" ");
        printf("%d", bestPath[i]);
    }
    return 0;
}
