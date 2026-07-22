#include <stdio.h>

int main() {
    int n, k;
    long long c = 1;
    long long total, result;
    scanf("%d%d", &n, &k);
    for (int i = 1; i <= k; i++) {
        c = c * (n - i + 1) / i;
    }
    total = 1LL << n;
    result = total - c + 1;
    if (result > total)
        printf("0");
    else
        printf("%lld", result);

    return 0;
}