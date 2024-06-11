#include <stdio.h>

int main(void) {

    double salario;
    double valorKwGasto;
    
    double valorKw;
    double valorConsumo;
    double valorConsumoDesconto;

    scanf("%lf", &salario);
    scanf("%lf", &valorKwGasto);
    
    valorKw = salario * (7.00 / 1000.00);
    valorConsumo = valorKw * valorKwGasto;
    valorConsumoDesconto = valorConsumo - (10.00/100.00) * valorConsumo;

    printf("Custo por kW: R$ %.2lf\n", valorKw);
    printf("Custo do consumo: R$ %.2lf\n", valorConsumo);
    printf("Custo com desconto: R$ %.2lf\n", valorConsumoDesconto);

    return 0;
}