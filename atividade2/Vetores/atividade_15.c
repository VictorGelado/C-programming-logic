#include <stdio.h>
#include <math.h>
 
int main() {
    int c, j, n, a;
   
    scanf("%d", &n);
   
    while (n--) {
        int qtdVezes = 0;
        int menorDistancia =  9999999;
        
        
        scanf("%d", &a);
        
        int v[a];
        
        for (c = 0; c < a; c++) {
            scanf("%d", &v[c]);
        }
        
        
        qtdVezes = (a/2)*(a-1);
        
        for (c = 0; c < a; c++) {
            for (j = 0; j < a; j++) {
                int menorDistanciaTemp = v[j] - v[c];
                
                if (menorDistanciaTemp < 0) menorDistanciaTemp *= -1; 
                
                if (menorDistanciaTemp < menorDistancia
                    && j != c
                ) {
                    menorDistancia = menorDistanciaTemp;
                } 
            }
        }
        
        printf("%d %d\n", menorDistancia, qtdVezes);
    }




    return 0;
}