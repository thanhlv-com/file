#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int A[1001], B[1001];
    int ans[1001];
    int k = 0;
    for (int i = 1; i <= n; i++)
        scanf("%d", &A[i]);
    for (int i = 1; i <= n; i++)
        scanf("%d", &B[i]);
    for (int i = 1; i <= n; i++) {
        if (A[i] == 1 && B[i] == 1) {
            ans[k++] = i;
        }
    }
    printf("%d\n", k);
    if (k > 0) {
        for (int i = 0; i < k; i++) {
            if (i > 0) printf(" ");
            printf("%d", ans[i]);
        }
    }
    return 0;
}
