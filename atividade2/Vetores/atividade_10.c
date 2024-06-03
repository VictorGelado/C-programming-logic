#include <stdio.h>
#include <math.h>
 
int main() {

    int n, c, maiorNota = -99999999, idxMaiorNota = -1, qtdOcorrencias = 0;

    scanf("%d", &n);


    int v[n];

    for (c = 0; c < n; c++) {
        scanf("%d", &v[c]);

        if (maiorNota < v[c]) maiorNota = v[c];
    }   


    int ultimaNota = v[n-1]; 

    for (c = 0; c < n; c++) {
        if (v[c] == maiorNota && idxMaiorNota == -1) idxMaiorNota = c; 
        if (ultimaNota == v[c]) qtdOcorrencias++;
    }

    printf("Nota %d, %d vezes\n", ultimaNota, qtdOcorrencias);
    printf("Nota %d, indice %d\n", maiorNota, idxMaiorNota);



    return 0;
}