#include <stdio.h>
#include <math.h>
int main() {
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    int p = 0;
    if (a == 0) {
        if (b == 0) {
            if (c == 0)
                p = 1;
            else
                p = 0;
        } else {
            double x = -c / b;
            if (x > 0)
                p = 1;
        }
    } else {
        double delta = b * b - 4 * a * c;
        if (delta >= 0) {
            double x1 = (-b - sqrt(delta)) / (2 * a);
            double x2 = (-b + sqrt(delta)) / (2 * a);
            if (x1 > 0 || x2 > 0)
                p = 1;
        }
    }
    printf("%d", p);
    return 0;
}