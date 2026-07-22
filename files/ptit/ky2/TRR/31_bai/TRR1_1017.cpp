#include <stdio.h>

int main() {
    int n, x, k = 0;
    int mark[1001] = {0};

    if (scanf("%d", &n) != 1) return 0;

    // ??c A và B, ph?n t? nào xu?t hi?n thì ?ánh d?u mark = 1
    for (int i = 0; i < 2 * n; i++) {
        scanf("%d", &x);
        if (x == 1) {
            mark[(i % n) + 1] = 1; // (i % n) + 1 giúp quy ??i ch? s? v? t? 1 ??n n
        }
    }
    // ??m t?ng s? ph?n t? thu?c h?p
    for (int i = 1; i <= n; i++) {
        if (mark[i]) k++;
    }
    printf("%d\n", k);
    // In các ph?n t? thu?c h?p
    int first = 1;
    for (int i = 1; i <= n; i++) {
        if (mark[i]) {
            if (!first) printf(" ");
            printf("%d", i);
            first = 0;
        }
    }

    return 0;
}
