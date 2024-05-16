#include <stdio.h>
 
int main() {

    int c = 0, valor, j;
    int tamanhoV = 20;
    int v[tamanhoV];
    char enter;


    while (c < tamanhoV) {
        
        if (scanf("%d%c", &valor, &enter) != 2 || enter == '\n') {
            v[c] = valor;
            break;
        }
        v[c++] = valor;
    }

    for (j = 0; j <= c; j++) {
        int numBi[32], i = 0;
        int novoNum = v[j];

        if (v[j] == 0) printf("%d", v[j]);
        else {
            while (novoNum > 0) {
                numBi[i] = novoNum % 2;
                novoNum /= 2;
                i++;
            }

            int k;
            for (k = i - 1; k >= 0; k--) {
                printf("%d", numBi[k]);
            }
        }

        printf("\n");
    }
    



    return 0;
}