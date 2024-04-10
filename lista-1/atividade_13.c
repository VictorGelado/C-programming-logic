#include <stdio.h>
#include <math.h>

int main() {

    double a, b, c, d, e, f, z, w; 

    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
    scanf("%lf", &d);
    scanf("%lf", &e);
    scanf("%lf", &f);

    z = (b * f - e * c) / (b * d - a * e);
    w = (c - a * z) / b;

    printf("O VALOR DE X E = %.2lf\n", z);
    printf("O VALOR DE Y E = %.2lf\n", w);

    return 0;
}