#include <stdio.h>

double salarioReajustado(double salario) {
  double salarioR = salario;

  if (salario <= 300.0) salarioR += salarioR * (50.0/100.0);
  else salarioR += salarioR * (30.0/100.0);

  return salarioR;
}

int main(void) {

  double salarioReais;

  scanf("%lf", &salarioReais);

  double x = salarioReajustado(salarioReais);

  printf("SALARIO COM REAJUSTE = %.2lf\n", x);

  return 0;
}