#include <stdio.h>
#include <math.h>
 

int qtdNotas(int valor, int notaValor) {
    int qtd = 0;
    int valorTemp = valor;

    while (valorTemp >= notaValor) {
        qtd += 1;
        valorTemp -= notaValor;
    }

    return qtd;
}


int main() {

    int valorReais, notas100, notas50, notas10, moedas1;

    scanf("%d", &valorReais);

    notas100 = qtdNotas(valorReais, 100);
    valorReais -= notas100 * 100;

    notas50 = qtdNotas(valorReais, 50);
    valorReais -= notas50 * 50;

    notas10 = qtdNotas(valorReais, 10);
    valorReais -= notas10 * 10;

    moedas1 = qtdNotas(valorReais, 1);
    valorReais -= moedas1;


    printf("NOTAS DE 100 = %d\n", notas100);
    printf("NOTAS DE 50 = %d\n", notas50);
    printf("NOTAS DE 10 = %d\n", notas10);
    printf("MOEDAS DE 1 = %d\n", moedas1);


    return 0;
}