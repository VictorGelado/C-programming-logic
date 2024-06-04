#include <stdio.h>
 
int main() {
    int n, c, j;
 
    scanf("%d", &n);
 
    int v[n];
    int vNoReps[n];
    int results[n*2];
 
    int tamAux = 0;
    for (c = 0; c < n; c++) {
        scanf("%d", &v[c]);
 
        int isInVNoReps = 0;
        for (j = 0; j < tamAux; j++) {
            if (v[c] == vNoReps[j]) {
                isInVNoReps = 1;
                break;
            }
        }
 
        if (!isInVNoReps) {
            vNoReps[tamAux] = v[c];
            tamAux++;
        }
    }
 
    for (c = 0; c < tamAux; c++) {
        int qtd = 0;
 
        for (j = 0; j < n; j++) {
            if (v[j] == vNoReps[c]) qtd++;
        }
 
        results[c*2] = vNoReps[c]; 
        results[c*2 + 1] = qtd;     
    }
 
    int numeroMaisRepetido = results[0];
    int repeticoesMaisRepetido = results[1];
    int menorNumeroMaisFrequente = results[0];
    for (c = 2; c < tamAux * 2; c += 2) {
        if (results[c + 1] > repeticoesMaisRepetido || (results[c + 1] == repeticoesMaisRepetido && results[c] < menorNumeroMaisFrequente)) {
            numeroMaisRepetido = results[c];
            repeticoesMaisRepetido = results[c + 1];
            menorNumeroMaisFrequente = results[c];
        }
    }
 
    printf("%d\n%d\n", numeroMaisRepetido, repeticoesMaisRepetido);
 
    return 0;
}