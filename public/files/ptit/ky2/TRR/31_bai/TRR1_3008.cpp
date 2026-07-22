#include <stdio.h>

int main() {
    int n, k, a[105];
    if (scanf("%d %d", &n, &k) != 2) return 0;

    a[0] = 0; // Ph?n t? ?o ?? so sánh v?i a[1]
    for (int i = 1; i <= k; i++)
        scanf("%d", &a[i]);

    // Tìm v? trí i l?n nh?t sao cho a[i] > a[i - 1] + 1
    int i = k;
    while (i >= 1 && a[i] == a[i - 1] + 1)
        i--;

    // N?u không tìm th?y, ?ây là t? h?p ??u tiên (1 2 ... k)
    if (i < 1) {
        printf("0");
        return 0;
    }

    // Gi?m a[i] ?i 1
    a[i]--;

    // ??t các ph?n t? t? i + 1 ??n k ??t giá tr? l?n nh?t có th?
    for (int j = i + 1; j <= k; j++) {
        a[j] = n - k + j;
    }

    // In k?t qu?
    for (int j = 1; j <= k; j++) {
        if (j > 1) printf(" ");
        printf("%d", a[j]);
    }

    return 0;
}
