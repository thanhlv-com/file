#include <stdio.h>

int n;
int c[16][16];

int x[16];
int used[16];
int bestX[16];
long long best = 1000000000000000000LL;
void Try(int i, long long sum) {
    int j;
    long long bound;
    int min;
    if (i > n) {
        if (sum < best) {
            best = sum;
            for (j = 1; j <= n; j++)
                bestX[j] = x[j];
        }
        return;
    }
    bound = sum;
    for (j = i; j <= n; j++) {
        min = 1000000000;
        for (int job = 1; job <= n; job++) {
            if (used[job] == 0 && c[j][job] < min)
                min = c[j][job];
        }

        bound += min;
    }
    if (bound >= best)
        return;
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
    printf("%lld\n", best);
    for (i = 1; i <= n; i++) {
        if (i > 1)
            printf(" ");

        printf("%d", bestX[i]);
    }
    return 0;
}
