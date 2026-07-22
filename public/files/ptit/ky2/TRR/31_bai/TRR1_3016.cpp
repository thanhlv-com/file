#include <stdio.h>

int main() {
    int n, t, a[105];
    if (scanf("%d %d", &n, &t) != 2) return 0;

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    while (t--) {
        // Th?c hi?n phép tr? 1 trong h? nh? phân
        int i = n - 1;
        while (i >= 0 && a[i] == 0) {
            a[i] = 1; // Vay 1: bit 0 bi?n thành 1
            i--;
        }

        // N?u không vay ???c n?a (t?t c? là 0)
        if (i < 0) {
            printf("0\n");
        } else {
            a[i] = 0; // Bit 1 ??u tiên g?p ???c b? tr? thành 0

            // In k?t qu?
            for (int j = 0; j < n; j++) {
                if (j) printf(" ");
                printf("%d", a[j]);
            }
            printf("\n");
        }
    }
    return 0;
}
