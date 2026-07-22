#include <stdio.h>

int n, k, t;
int a[35];
int found = 0;

void Try(int i) {
    int j;
    if (i == k - 1) {
        a[i] = t;
        found = 1;
        for (j = 0; j < k; j++) {
            if (j > 0)
                printf(" ");
            printf("%d", a[j]);
        }

        printf("\n");
        return;
    }
    for (j = a[i - 1] + 1; j < t; j++) {
        a[i] = j;
        Try(i + 1);
    }
}

int main() {
    scanf("%d %d %d", &n, &k, &t);
    a[0] = 0;
    Try(0);
    if (found == 0)
        printf("0");
    return 0;
}
