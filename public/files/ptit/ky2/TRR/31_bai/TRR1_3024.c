#include <stdio.h>

int n, k, found;
int fixed_val[30], rev_val[30], ans[30], used[30];

void backtrack(int pos) {
    if (pos > n) {
        found = 1;
        for (int i = 1; i <= n; i++)
            printf("%d%c", ans[i], i == n ? '\n' : ' ');
        return;
    }

    // N?u có giá tr? c? ??nh thì ch? gán 1 l?n, ng??c l?i th? t? 1 ??n n
    int start = fixed_val[pos] ? fixed_val[pos] : 1;
    int end   = fixed_val[pos] ? fixed_val[pos] : n;

    for (int v = start; v <= end; v++) {
        if (!used[v]) {
            used[v] = 1;
            ans[pos] = v;
            backtrack(pos + 1);
            used[v] = 0;
        }
    }
}

int main() {
    if (scanf("%d%d", &n, &k) != 2) return 0;

    int is_valid = 1;
    for (int i = 0; i < k; i++) {
        int u, v;
        scanf("%d%d", &u, &v);

        // Ki?m tra ph?m vi + Mâu thu?n gán giá tr? (u trùng v khác, ho?c v trùng u khác)
        if (u < 1 || u > n || v < 1 || v > n ||
           (fixed_val[u] && fixed_val[u] != v) ||
           (rev_val[v] && rev_val[v] != u)) {
            is_valid = 0;
        }
        fixed_val[u] = v;
        rev_val[v] = u;
    }

    if (!is_valid) {
        puts("0");
        return 0;
    }

    backtrack(1);

    if (!found) puts("0");
    return 0;
}