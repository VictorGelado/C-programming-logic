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


  a4 = ((a1 + a2 * 3) + (a3 * 5)) % 7;

  novoNumero = a1 * 1000 + a2 * 100 + a3 * 10 + a4;

  printf("O NOVO NUMERO E = %d\n", novoNumero);

  return 0;
}