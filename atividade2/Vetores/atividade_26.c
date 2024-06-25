#include <stdio.h>
#include <stdlib.h>

#define QTDANOES 9

void ordenarVetor(int *v, int tam) {
    int c, j, temp;
    
    for (c = 0; c < tam; c++) {
        for (j = c+1; j < tam; j++) {
            if (v[c] > v[j]) {
                temp = v[c];
                v[c] = v[j];
                v[j] = temp;
            }
        } 
    }
}

int somarVetor(int *v, int tam) {
    int c, j;
    int soma = 0;
    
    for (c = 0; c < QTDANOES; c++) {
        soma += v[c];
    }
    return soma;
}

void descobrirAnoesFalsos(int *indices, int soma, int *v, int tam) {
    int c, j;
    
    for (c = 0; c < tam; c++) {
        for (j = c+1; j < tam; j++) {
            if (v[c] + v[j] == soma - 100) {
                indices[0] = c;
                indices[1] = j;
                break;
            }
        }
    }
}



int main() {
    
    int c, j, n, *v = (int *)malloc(QTDANOES * sizeof(int));
    int *indices = (int *)malloc(2 * sizeof(int));
    int soma = 0;
    
    scanf("%d", &n);
    
    while (n--) {
        for (c = 0; c < QTDANOES; c++) {
            scanf("%d", &v[c]);
        }
        
        ordenarVetor(v, QTDANOES);
        soma = somarVetor(v, QTDANOES);
        descobrirAnoesFalsos(indices, soma, v, QTDANOES);
        
        for (c = 0; c < QTDANOES; c++) {
            if (c != indices[0] && c != indices[1]) printf("%d\n", v[c]);
        }
    }
    
    free(v);

    return 0;
}
