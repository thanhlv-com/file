#include <stdio.h>
int main() {
    double a, b;
    scanf("%lf %lf", &a, &b);  
    int p;
    if (a == 0) {
        p = (b == 0);
    } else {
        p = (-b / a < 0);
    }
    printf("%d", p);
    return 0;
}