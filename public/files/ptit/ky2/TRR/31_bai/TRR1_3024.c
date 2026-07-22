#include <stdio.h>
#include <stdbool.h>

#define MAXN 25

int n, k;
int fixed_val[MAXN];
bool used[MAXN];
int ans[MAXN];
bool found_any = false;

void backtrack(int pos) {
    // Tr??ng h?p c? s?: ?ã ?i?n ?? n v? trí -> In hoán v?
    if (pos > n) {
        found_any = true;
        for (int i = 1; i <= n; i++) {
            printf("%d%c", ans[i], (i == n) ? '\n' : ' ');
        }
        return;
    }

    // Tr??ng h?p v? trí pos ?ã có giá tr? c? ??nh
    if (fixed_val[pos] != 0) {
        int v = fixed_val[pos];
        // N?u giá tr? v ch?a b? chi?m b?i các v? trí tr??c
        if (!used[v]) {
            used[v] = true;
            ans[pos] = v;

            backtrack(pos + 1);

            used[v] = false; // Quay lùi
        }
    } else {
        // Th? t?t c? các giá tr? ch?a ???c s? d?ng t? 1 ??n n
        for (int v = 1; v <= n; v++) {
            if (!used[v]) {
                used[v] = true;
                ans[pos] = v;

                backtrack(pos + 1);

                used[v] = false; // Quay lùi
            }
        }
    }
}

int main() {
    if (scanf("%d %d", &n, &k) != 2) return 0;

    // Kh?i t?o các m?ng
    for (int i = 1; i <= n; i++) {
        fixed_val[i] = 0;
        used[i] = false;
    }

    bool is_valid = true;

    for (int i = 0; i < k; i++) {
        int u, v;
        scanf("%d %d", &u, &v);

        // 1. Ki?m tra ph?m vi d? li?u h?p l?
        if (u < 1 || u > n || v < 1 || v > n) {
            is_valid = false;
            continue;
        }

        // 2. Mâu thu?n: V? trí u ?ã gán giá tr? khác v t? tr??c
        if (fixed_val[u] != 0 && fixed_val[u] != v) {
            is_valid = false;
        }

        fixed_val[u] = v;
    }

    // 3. Mâu thu?n: Ki?m tra xem có 2 v? trí khác nhau cùng gán 1 giá tr? v hay không
    bool check_val[MAXN] = {false};
    for (int i = 1; i <= n; i++) {
        if (fixed_val[i] != 0) {
            int v = fixed_val[i];
            if (check_val[v]) {
                is_valid = false; // Trùng giá tr? v ? 2 v? trí
            }
            check_val[v] = true;
        }
    }

    // N?u d? li?u ràng bu?c mâu thu?n -> Không th? t?o hoán v?
    if (!is_valid) {
        printf("0\n");
        return 0;
    }

    // B?t ??u quay lùi t? v? trí 1
    backtrack(1);

    // N?u không tìm th?y hoán v? nào th?a mãn
    if (!found_any) {
        printf("0\n");
    }

    return 0;
}