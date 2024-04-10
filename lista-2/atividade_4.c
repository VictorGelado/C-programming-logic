#include <stdio.h>

int main(void) {

  int qtdHorasLocada, horasAbaixo3, horasPor3;

  double valorPorLocacao;

  scanf("%d", &qtdHorasLocada);

  horasPor3 = qtdHorasLocada / 3;
  horasAbaixo3 = qtdHorasLocada % 3;

  valorPorLocacao = horasPor3 * 10.0 + horasAbaixo3 * 5.0;

  printf("O VALOR A PAGAR E = %.2lf", valorPorLocacao);

  return 0;
}