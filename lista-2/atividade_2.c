#include <stdio.h>

int main(void) {
  int conta;
  double consumoAguaM3, valorConta;
  char tipoCliente;

  scanf("%d %lf %c", &conta, &consumoAguaM3, &tipoCliente);

  switch (tipoCliente) {
    case 'R':
      valorConta = 5.0 + consumoAguaM3 * 0.05;
      break;

    case 'C':
      valorConta = 500.0 + 0.25 * (consumoAguaM3 - 80);
      break;

    case 'I':
      valorConta = 800.0 + 0.04 * (consumoAguaM3 - 100);
      break;
  }

  printf("CONTA = %d\n", conta);
  printf("VALOR DA CONTA = %.2lf\n", valorConta);

  return 0;
}