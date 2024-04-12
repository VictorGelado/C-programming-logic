#include <stdio.h>
#include <math.h>

int main(void)
{

    double a, b, c, delta, x1, x2;

    scanf("%lf %lf %lf", &a, &b, &c);

    delta = pow(b, 2) - 4.0 * a * c;

    if (delta < 0) {
        printf("RAIZES IMAGINARIAS\n");
    } else if (delta == 0) {
        printf("RAIZ UNICA\n");

        x1 = (((-b) + sqrt(delta)) / (2 * a));
        x2 = (((-b) - sqrt(delta)) / (2 * a));    

        x1 = (x1)? x1: x2;

        printf("X1 = %.2lf\n", x1);
    } else {
        printf("RAIZES DISTINTAS\n");

        x1 = (((-b) + sqrt(delta)) / (2 * a));
        x2 = (((-b) - sqrt(delta)) / (2 * a));   

        if (x2 < x1) {
            double numTemp = x1;

            x1 = x2;
            x2 = numTemp;
        } 

        printf("X1 = %.2lf\n", x1);
        printf("X2 = %.2lf\n", x2);
    }

    return 0;
}