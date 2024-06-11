#include <stdio.h>
 
int main() {
    int c, j, n, m;
   
    scanf("%d %d", &m, &n);
   
    int ma[m][n];
   
    int valorAtual = 1;
     // 1 = valor de 1 a n
    for (c = 0; c < m; c++) {
        int zeroOrValorAtual = 1;
        if (c % 2 == 0) zeroOrValorAtual = 0;
        else zeroOrValorAtual = 1;
        
        for (j = 0; j < n; j++) {
            if (zeroOrValorAtual) {
                ma[c][j] = valorAtual++;
            } else {
                ma[c][j] = 0;
            }
            
            zeroOrValorAtual = !zeroOrValorAtual;
        } 
    }
    
    for (c = 0; c < m; c++) {
        if (c > 0) printf("\n");
        for (j = 0; j < n; j++) {
            printf("%d ", ma[c][j]);
        } 
    }
    
 
    
    
 
    return 0;
}