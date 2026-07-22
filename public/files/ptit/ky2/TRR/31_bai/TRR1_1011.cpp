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
        } else {
            double t = -c / b;
            if (t >= 0)
                p = 1;
        }
    } else {
        double delta = b * b - 4 * a * c;
        if (delta >= 0) {
            double t1 = (-b - sqrt(delta)) / (2 * a);
            double t2 = (-b + sqrt(delta)) / (2 * a);
            if (t1 >= 0 || t2 >= 0)
                p = 1;
        }
    }
    printf("%d", p);
    return 0;
}
