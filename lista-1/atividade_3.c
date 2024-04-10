#include <stdio.h>
#include <math.h>

int main(void) {

    double PI = 3.14159;

    double raioMetro; 
    double alturaMetro;

    scanf("%lf", &raioMetro);
    scanf("%lf", &alturaMetro);

    double aC = PI * pow(raioMetro, 2);
    double aL = 2 * PI * raioMetro * alturaMetro;
    
    double aT = 2 * aC + aL;

    double custoTotal = aT * 100;

    printf("O VALOR DO CUSTO E = %.2lf\n", custoTotal);

    return 0;
}