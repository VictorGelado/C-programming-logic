#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
int elemento10vezes(int *v, int m, int indice) {
    if (indice == m - 1) {
        return 0;
    }

    if (v[indice] * 10 == v[indice + 1]) {
        return 1;
    }
    
    elemento10vezes(v, m, indice + 1);
}
 
void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}
 
int main() {
    int n, c;
    scanf("%d", &n);
 
    while (n--) {
        int m;
        limparBuffer();
        scanf("%d", &m);

        int v[m];

        for (c = 0; c < m; c++) {
            scanf("%d", &v[c]);
        }

        elemento10vezes(v, m, 0) ? printf("VERDADEIRO\n") : printf("FALSO\n");     
    }
 
    return 0;
}
