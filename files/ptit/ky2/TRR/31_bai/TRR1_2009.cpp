#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int phi[10001];
    for (int i = 0; i <= n; i++)
        phi[i] = i;
    for (int i = 2; i <= n; i++) {
        if (phi[i] == i) {
            for (int j = i; j <= n; j += i)
                phi[j] -= phi[j] / i;
        }
    }
    long long ans = 1;
    for (int i = 1; i <= n; i++)
        ans += phi[i];
    printf("%lld", ans);
    return 0;
}
