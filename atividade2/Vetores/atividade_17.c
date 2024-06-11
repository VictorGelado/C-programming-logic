#include <stdio.h>
#include <math.h>
 
int main() {
    int c, j, n, qtd = 0;
    
    scanf("%d", &n);
    
    int v[n];
    
    for (c = 0; c < n; c++) {
        scanf("%d", &v[c]);
    }
    
    
    int unico;
    for (c = 0; c < n; c++) {
        unico = 1;
        
        for (j = 0; j < n; j++) {
            if (v[c] == v[j] && c != j) unico = 0;
        }
        
        if (unico) qtd++;
    }
    
    printf("%d\n", qtd);
    
    
    
    
    
    
    
    return 0;
}