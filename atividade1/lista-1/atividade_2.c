#include <stdio.h>

int main(void) {

    double tempF;
    double qtdChuvaPolegadas;

    scanf("%lf", &tempF);
    scanf("%lf", &qtdChuvaPolegadas);

    double tempC = (5.00 * (tempF - 32.00)) / 9.0;
    double qtdChuvaMm = qtdChuvaPolegadas * 25.40;

    printf("O VALOR EM CELSIUS = %.2lf\n", tempC);
    printf("A QUANTIDADE DE CHUVA E = %.2lf\n", qtdChuvaMm);

    return 0;
}