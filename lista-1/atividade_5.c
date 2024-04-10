#include <stdio.h>
#include <string.h>

int main(void) {
    double altura, aresta;

    scanf("%lf %lf", &altura, &aresta);

    double aB = (3 * pow(aresta, 2) * sqrt(3))/ 2;

    double v =  (1.0/3.0) * aB * altura;

    printf("O VOLUME DA PIRAMIDE E = %.2lf METROS CUBICOS\n", v);

    return 0;
}
