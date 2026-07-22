#include <stdio.h>

int main() {
    int n, t;
    int a[105];
    scanf("%d%d", &n, &t);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (int k = 0; k < t; k++) {
        int i = n - 1;
        while (i >= 0 && a[i] == 1)
            i--;
        if (i < 0) {
            printf("0\n");
            continue;
        }
        a[i] = 1;
        for (int j = i + 1; j < n; j++)
            a[j] = 0;

        for (int j = 0; j < n; j++) {
            if (j) printf(" ");
            printf("%d", a[j]);
        }
        printf("\n");
    }

    return 0;
}
