#include <stdio.h>

int main() {
    int n, a[105];
    if (scanf("%d", &n) != 1) return 0;
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    // Tìm i l?n nh?t sao cho a[i] > a[i + 1]
    int i = n - 2;
    while (i >= 0 && a[i] <= a[i + 1])
        i--;
    // N?u không có (m?ng t?ng d?n), ?ây là hoán v? ??u tiên
    if (i < 0) {
        printf("0");
        return 0;
    }
    // Tìm j l?n nh?t (j > i) sao cho a[j] < a[i]
    int j = n - 1;
    while (a[j] >= a[i])
        j--;

    // ??i ch? a[i] và a[j]
    int t = a[i];
    a[i] = a[j];
    a[j] = t;
    // L?t ng??c ?o?n t? i + 1 ??n n - 1
    for (int l = i + 1, r = n - 1; l < r; l++, r--) {
        t = a[l];
        a[l] = a[r];
        a[r] = t;
    }
    // In k?t qu?
    for (int i = 0; i < n; i++) {
        if (i) printf(" ");
        printf("%d", a[i]);
    }
    return 0;
}
