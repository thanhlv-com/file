#include <stdio.h>
int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    long long dp[55][55] = {0};
    dp[0][0] = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < k; j++)
            dp[i][0] += dp[i - 1][j];
        for (int j = 0; j < k - 1; j++)
            dp[i][j + 1] += dp[i - 1][j];
    }
    long long ans = 0;
    for (int j = 0; j < k; j++)
        ans += dp[n][j];
    printf("%lld", ans);
    return 0;
}

