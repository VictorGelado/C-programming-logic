#include <stdio.h>
#include <math.h>

int main() {

  double valorFabrica, porcentagemImposto, porcentagemDistribuidor, valorTotal;

  scanf("%lf %lf %lf", &valorFabrica, &porcentagemDistribuidor, &porcentagemImposto);

  double porcentagemCarroD = (porcentagemDistribuidor/100.0) * valorFabrica;
  double impostoCarro = (porcentagemImposto/100.0) * valorFabrica;

  valorTotal = valorFabrica + porcentagemCarroD + impostoCarro;

  printf("O VALOR DO CARRO E = %.2lf\n\n", valorTotal);

  return 0;
}