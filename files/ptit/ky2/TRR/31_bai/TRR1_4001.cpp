#include <stdio.h>

int n;
long long b, a[25], c[25], max_val = 0;
int x[25], best_x[25];

void Try(int i, long long w, long long v) {
    if (i > n) {
        if (v > max_val) {
            max_val = v;
            for (int j = 1; j <= n; j++) best_x[j] = x[j];
        }
        return;
    }

    // Ch?n ?? v?t i = 1 (?u tiên th? tr??c)
    if (w + a[i] <= b) {
        x[i] = 1;
        Try(i + 1, w + a[i], v + c[i]);
    }

    // Không ch?n ?? v?t i = 0
    x[i] = 0;
    Try(i + 1, w, v);
}

int main() {
    scanf("%d %lld", &n, &b);
    for (int i = 1; i <= n; i++)
        scanf("%lld %lld", &a[i], &c[i]);

    Try(1, 0, 0);

    printf("%lld\n", max_val);
    for (int i = 1; i <= n; i++)
        printf("%d%c", best_x[i], (i == n) ? '\n' : ' ');

    return 0;
}
