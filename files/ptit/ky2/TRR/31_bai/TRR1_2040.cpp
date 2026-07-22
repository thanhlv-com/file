#include <stdio.h>

int main() {
    int n, s;
    scanf("%d %d", &n, &s);
    long long dp[55][55] = {0};
    dp[0][0] = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= i; j++) {
            dp[i][j] = dp[i - 1][j];
            if (j > 0)
                dp[i][j] += dp[i - 1][j - 1];
        }
    }
    printf("%lld", dp[n][s]);
    return 0;
}
