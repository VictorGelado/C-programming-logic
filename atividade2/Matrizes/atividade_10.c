#include <stdio.h>
 
int main() {
    int c, j, k, l, n;
   
    scanf("%d", &n);
   
    int m[n][n];
   
    for (c = 0; c < n; c++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &m[c][j]);
        } 
    }
    
    
    int trA = 0; 
    
    for (c = 0; c < n; c++) {
        trA += m[c][c];
    }
    
    
    for (c = 0; c < n; c++) {
        if (c > 0) printf("\n");
        
        for (j = 0; j < n; j++) {
            printf("%d ", trA * m[c][j] + m[j][c]);
        } 
    }
    
    
 
    return 0;
}