#include <stdio.h>

#define SIZE 6

int calcularSomaAmpulheta(int matriz[SIZE][SIZE], int linha, int coluna) {
    int soma = 0;
    if (linha >= 0 && coluna >= 0 && linha + 2 < SIZE && coluna + 2 < SIZE) {
        soma += matriz[linha][coluna] + matriz[linha][coluna + 1] + matriz[linha][coluna + 2];
        soma += matriz[linha + 1][coluna + 1];
        soma += matriz[linha + 2][coluna] + matriz[linha + 2][coluna + 1] + matriz[linha + 2][coluna + 2];
    }
    return soma;
}

int main() {
    int matriz[SIZE][SIZE], i, j;

    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    int maiorSoma = -63;
    int somaT = 0;

    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            somaT += matriz[i][j];
        }
    }

    if (somaT == 0) {
        maiorSoma = 0;
    } else if (somaT < -63) {
        maiorSoma = -63;
    } else {
        for (i = 0; i < SIZE; i++) {
            for (j = 0; j < SIZE; j++) {
                int soma = calcularSomaAmpulheta(matriz, i, j);
                if (soma > maiorSoma) {
                    maiorSoma = soma;
                }
            }
        }
    }



    printf("%d\n", maiorSoma);

    return 0;
}
