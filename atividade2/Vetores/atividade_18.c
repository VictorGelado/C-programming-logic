#include <stdio.h>
#include <math.h>
 
 
#define CPF 11
 
int main() {
    int c, j, v[CPF], n;
    
    scanf("%d", &n);
    
    while(n--) {
        int count = 8;
        int b1= 0, b2 = 0;
        
        
        for (c = 0; c < CPF; c++) {
            scanf("%d", &v[c]);
        }
    
        
        for (c = 0; c < 9; c++) {
            b1 += v[c] * (c + 1);
            
            b2 += v[c] * (9 - c);
        }
    
        b1 %= 11;
        b1 = b1 == 10? 0: b1;
        
        b2 %= 11;
        b2 = b2 == 10? 0: b2;
        
        if (b1 == v[9] && b2 == v[10]) {
            printf("CPF valido\n");
        } else printf("CPF invalido\n");
    }
    
    
    
    
    
    
    return 0;
}