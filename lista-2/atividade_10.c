#include <stdio.h>

int main(void)
{

    double a, b, c, numTemp;

    scanf("%lf %lf %lf", &a, &b, &c);

    if (c < b) {
        numTemp = b;
        b = c;
        c = numTemp;
    }
    
    if (a > c) {
        numTemp = c;
        c = a;
        a = numTemp;
    }
    
    if (a > b) {
        numTemp = b;
        b = a;
        a = numTemp;
    }

    

    printf("%.2lf, %.2lf, %.2lf", a, b, c);

    return 0;
}