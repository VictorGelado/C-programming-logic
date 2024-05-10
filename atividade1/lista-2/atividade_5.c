#include <stdio.h>

char calcularConceito(float nota) {
  char conceito = ' ';

  if (nota >= 9.0) conceito = 'A';
  else if (nota < 9.0 && nota >= 7.5) conceito = 'B';
  else if (nota < 7.5 & nota >= 6) conceito = 'C';
  else conceito = 'D'; 


  return conceito;
}


int main(void) {

  float x;

  scanf("%f", &x);

  char y = calcularConceito(x);

  printf("NOTA = %.1f CONCEITO = %c\n", x, y);

  return 0;
}