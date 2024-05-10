#include <stdio.h>
#include <math.h>

int main() {

  int numero, a1, a2, a3, a4;
  int dezena, unidade, novoNumero;

  scanf("%d", &numero);

  dezena = numero;

  while (dezena >= 100){
    dezena -= 100;
  }

  if (dezena == 0) {
    a1 = numero / 100;
    a2 = 0;
    a3 = 0;
  } else {
    a1 = (numero - dezena) / 100;
  };

  unidade = dezena;

  while (unidade >= 10){
    unidade -= 10;
  }

  if (unidade == 0) {
    a3 = 0;
  } else {
    a3 = unidade;
  }

  a2 = dezena / 10;

  novoNumero = a3 * 100 + a2 * 10 + a1 * 1;

  printf("%d\n", novoNumero);

  return 0;
}