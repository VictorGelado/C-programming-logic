#include <stdio.h>
#include <math.h>
 
int main() {
    int c, j, qtdAlunos, qtdCancelar, tamanho, capacidade, horario, qtdAlunosPresentes = 0;
    
    
    scanf("%d %d", &qtdAlunos, &qtdCancelar);
    
    int v[qtdAlunos];
    
    for (c = 0; c < qtdAlunos; c++) {
        scanf("%d", &v[c]);
        
        if (v[c] <= 0) qtdAlunosPresentes++; 
    }
    
    
    if (qtdAlunosPresentes >= qtdCancelar) {
        printf("NAO\n");
        
        for (c = qtdAlunos - 1; c >= 0; c--) {
            if (v[c] <= 0) printf("%d\n", c+1);
        }
    } else {
        printf("SIM");
    }
    
    
    
    
    
    
    
    
    return 0;
}