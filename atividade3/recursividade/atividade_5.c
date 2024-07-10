#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
int somaVetor(int tam, int *v, int s, int idx) {
    s+=v[idx];

    if (tam-1 == idx) return s;

    somaVetor(tam, v, s, ++idx);
}
 
int main() {
 
    int n;
    
    scanf("%d", &n);
 
    while (n--) {
        int tam, c;

        getchar();
        scanf("%d", &tam);

        int v[tam];

        for (c = 0; c < tam; c++) {
            scanf("%d", &v[c]);
        }

        printf("%d\n", somaVetor(tam, v, 0, 0));
   
    }
    
 
 
 
 
 
    return 0;
}