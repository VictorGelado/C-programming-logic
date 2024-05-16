#include <stdio.h>
 
int main() {
 
    int n;
 
 
    do {
        scanf("%d", &n);   
    } while (n < 1 || n > 100000);
 
    int numeros[n];
    int c;
 
 
    for (c = 0; c <= n - 1; c++) {
        scanf("%d", &numeros[c]);
    }
 
 
 
    int m;
 
    do { 
        scanf("%d", &m);   
    } while (m < 1 || m > 1000);
 
    int j;
 
    for (c = 1; c <= m; c++) {
        int nProcura;
        scanf("%d", &nProcura);
 
        int acheiNAchei = 0;
 
        for (j = 0; j <= n - 1; j++) {
            if (numeros[j] == nProcura) {
                acheiNAchei = 1;
            }
        }
 
        if (!acheiNAchei) printf("NAO ACHEI\n");
        else printf("ACHEI\n");
    }
 
 
    return 0;
}