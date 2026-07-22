#include <stdio.h>

int n, k, found, f[30], r[30], ans[30], used[30];

void backtrack(int pos) {
    if (pos > n) {
        found = 1;
        for (int i = 1; i <= n; i++)
            printf("%d%c", ans[i], " \n"[i == n]);
        return;
    }

    int s = f[pos] ? f[pos] : 1;
    int e = f[pos] ? f[pos] : n;

    for (int v = s; v <= e; v++) {
        if (!used[v]) {
            used[v] = 1; ans[pos] = v;
            backtrack(pos + 1);
            used[v] = 0;
        }
    }
}

int main() {
    if (scanf("%d%d", &n, &k) != 2) return 0;

    int valid = 1;
    for (int i = 0, u, v; i < k; i++) {
        scanf("%d%d", &u, &v);
        if (u < 1 || u > n || v < 1 || v > n || (f[u] && f[u] != v) || (r[v] && r[v] != u))
            valid = 0;
        else
            f[u] = v, r[v] = u;
    }

    if (valid) backtrack(1);
    if (!found) puts("0");

    return 0;
}