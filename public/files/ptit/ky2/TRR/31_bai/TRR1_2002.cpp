#include <stdio.h>
int gcd(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}
int countMultiples(int l, int r, int x) {
    return r / x - (l - 1) / x;
}
int main() {
    int a, b, k, m;
    scanf("%d %d %d %d", &a, &b, &k, &m);
    int lcm = k / gcd(k, m) * m;
    int ans = countMultiples(a, b, k)
            + countMultiples(a, b, m)
            - countMultiples(a, b, lcm);
    printf("%d", ans);
    return 0;
}
