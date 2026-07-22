#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int t = 0;
    int sum = 0;
    while (sum + (t + 1) * (t + 1) <= n) {
        t++;
        sum += t * t;
    }
    printf("%d", t);
    return 0;
}
