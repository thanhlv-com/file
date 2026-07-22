#include <stdio.h>

int main() {
    long long n, m, p;

    // ??c liên t?c cho ??n khi h?t t?p d? li?u (EOF)
    while (scanf("%lld %lld %lld", &n, &m, &p) == 3) {
        // Xác ??nh s? nguyên d??ng nh? nh?t (>= 1) chia m d? p
        long long first_x = (p == 0) ? m : p;

        long long k = 0;
        // N?u n >= first_x thì m?i t?n t?i ít nh?t 1 s? th?a mãn
        if (n >= first_x) {
            k = (n - first_x) / m + 1;
        }

        // S? l??ng c?n ch?n theo Nguyên lý Dirichlet
        long long t = k + 1;

        printf("%lld\n", t);
    }

    return 0;
}