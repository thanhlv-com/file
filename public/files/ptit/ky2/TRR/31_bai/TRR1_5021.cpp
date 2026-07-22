#include <stdio.h>

int main() {
    int n, k;
    int dem = 0;

    scanf("%d%d", &n, &k);

    for (int a = 1; a <= n; a++) {
        for (int b = 1; b <= n; b++) {
            if ((a * b) % 4 != 0)
                dem++;
        }
    }

    if (dem + k > n * n)
        printf("0");
    else
        printf("%d", dem + k);

    return 0;
}
