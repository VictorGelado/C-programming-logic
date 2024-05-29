#include <stdio.h>

void imprimirMatrizPGM(int largura, int altura, int larguraBorda, int valorBorda) {
    int i, j;

    printf("P2\n");
    printf("%d %d\n", largura, altura);
    printf("255\n");
    for (i = 0; i < altura; i++) {
        for (j = 0; j < largura; j++) {
            if (i < larguraBorda || j < larguraBorda || i >= altura - larguraBorda || j >= largura - larguraBorda) {
                printf("%d ", valorBorda);
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }
}

int main() {
    int largura, altura, larguraBorda, valorBorda;
    scanf("%d %d %d %d", &largura, &altura, &larguraBorda, &valorBorda);

    do {
        scanf("%d %d %d %d", &largura, &altura, &larguraBorda, &valorBorda);
    } while (largura <= 0 || altura <= 0 || largura > 100 || altura > 100 || larguraBorda < 0 || larguraBorda > largura / 2 || larguraBorda > altura / 2);

    imprimirMatrizPGM(largura, altura, larguraBorda, valorBorda);

    return 0;
}
