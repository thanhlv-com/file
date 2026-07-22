#include <stdio.h>

// Hàm tính t? h?p C(n, k) t??ng ???ng math.comb(n, k)
unsigned long long comb(int n, int k) {
    if (k < 0 || k > n) return 0;
    if (k == 0 || k == n) return 1;

    // T?i ?u s? l?n l?p: C(n, k) = C(n, n - k)
    if (k > n - k) k = n - k;

    unsigned long long res = 1;
    for (int i = 1; i <= k; i++) {
        res = res * (n - i + 1) / i;
    }
    return res;
}

int main() {
    int n, k;

    // ??c n và k t? stdin (tr? v? s? l??ng ph?n t? ??c thành công)
    if (scanf("%d %d", &n, &k) < 2) {
        return 0;
    }

    if (k < 0 || k > n) {
        printf("0\n");
        return 0;
    }

    unsigned long long good = comb(n, k);
    if (good == 0) {
        printf("0\n");
        return 0;
    }

    // 1ULL << n t??ng ???ng v?i (1 << n) trong Python
    // Dùng 1ULL (unsigned long long) ?? tránh tràn s? v?i n lên ??n 63
    unsigned long long total = 1ULL << n;
    unsigned long long bad = total - good;

    printf("%llu\n", bad + 1);

    return 0;
}