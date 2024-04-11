#include <stdio.h>

int main(void) {

  int numero, a1, a2, a3, a4;
  int milhar, dezena, unidade, centena, numAuxiliar;

  while (scanf("%d", &numero) > 9999) {
    printf("Numero invalido!");
    scanf("%d", &numero);
  }

  // milhar
  numAuxiliar = numero;

  if (numAuxiliar >= 1000) {
    while (numAuxiliar >= 1000) {
      numAuxiliar -= 1000;
    }

    centena = numAuxiliar;
    milhar = (numero - centena) / 1000;
  }  else {
    milhar = 0;
    centena = numero;
  }


  // dezena
  numAuxiliar = centena;

  if (numAuxiliar >= 100 || numero >= 1000) {
    while (numAuxiliar >= 100) {
      numAuxiliar -= 100;
    }

    dezena = numAuxiliar;
    centena = (centena - dezena) / 100;
  } else {
    centena = 0;
    
    dezena = (numero >= 10)? numero: 0;
  }

  //unidade
  numAuxiliar = dezena;

  if (numAuxiliar >= 10 || numero >= 1000 || numero >= 100) {
    while (numAuxiliar >= 10) {
      numAuxiliar -= 10;
    }

    unidade = numAuxiliar;
    dezena = (dezena - unidade) / 10;
  } else unidade = numero;

  printf("milhar: %d, centena: %d, dezena: %d, unidade: %d\n\n", milhar, centena, dezena, unidade);
  

  return 0;
}