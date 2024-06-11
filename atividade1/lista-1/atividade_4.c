#include <stdio.h>
#include <math.h>

int main(void) {

    double a, b, c;

    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);

    double x = pow(b, 2) - (4 * a * c);

    printf("O VALOR DE DELTA E = %.2lf\n", x);

    return 0;
}