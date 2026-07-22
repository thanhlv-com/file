#include <stdio.h>

int main() {
    int n, t;
    scanf("%d %d", &n, &t);

    int a[105];

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    while (t--) {
        int i = n - 2;
        while (i >= 0 && a[i] >= a[i + 1])
            i--;
        if (i < 0) {
            printf("0\n");
            continue;
        }
        int j = n - 1;
        while (a[j] <= a[i])
            j--;
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        int l = i + 1, r = n - 1;
        while (l < r) {
            temp = a[l];
            a[l] = a[r];
            a[r] = temp;
            l++;
            r--;
        }
        for (int i = 0; i < n; i++) {
            if (i) printf(" ");
            printf("%d", a[i]);
        }
        printf("\n");
    }

    return 0;
}
