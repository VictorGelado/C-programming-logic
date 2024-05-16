#include <stdio.h>
 
int main() {
 
    int n, k, qtdNMaiorIgual = 0;
    int c;

    do {
        scanf("%d", &n);
    } while (n < 1 && n > 1000);

    int v[n];


    for (c = 0; c <= n - 1; c++) {
        scanf("%d", &v[c]);
    }

    scanf("%d", &k);

    for (c = 0; c <= n - 1; c++) {
        if (v[c] >= k) qtdNMaiorIgual++;
    }
 
 
    printf("%d\n", qtdNMaiorIgual);

    return 0;
}