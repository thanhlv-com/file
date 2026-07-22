#include <stdio.h>

int n, k;
int a[105];
int fixed[105];
int found = 0;

void Try(int i) {
    int j;
    if (i > n) {
        found = 1;

        for (j = 1; j <= n; j++) {
            if (j > 1)
                printf(" ");
            printf("%d", a[j]);
        }
        printf("\n");
        return;
    }
    if (fixed[i] != -1) {
        a[i] = fixed[i];
        Try(i + 1);
        return;
    }
    a[i] = 0;
    Try(i + 1);

    a[i] = 1;
    Try(i + 1);
}

int main() {
    int i, u, v;
    scanf("%d %d", &n, &k);
     for (i = 1; i <= n; i++)
        fixed[i] = -1;
    for (i = 1; i <= k; i++) {
        scanf("%d %d", &u, &v);
        if (fixed[u] != -1 && fixed[u] != v) {
            printf("0");
            return 0;
        }
        fixed[u] = v;
    }
    Try(1);
    if (found == 0)
        printf("0");

    return 0;
}
