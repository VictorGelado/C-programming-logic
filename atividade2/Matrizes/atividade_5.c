
#include <stdio.h>
 
int main() {
 
    int m, n, c, j; 

    scanf("%d %d", &m, &n);

    int ma[m][n];
    int valorAtual = 1;

    for (c = 0; c < m; c++) {
        for (j = 0; j < n; j++) {
            ma[c][j] = valorAtual;

            valorAtual = !valorAtual;
        }

        if (n % 2 == 0) valorAtual = !valorAtual;
    }

    for (c = 0; c < m; c++) {
        if (c > 0) printf("\n");
        for (j = 0; j < n; j++) {
            printf("%d", ma[c][j]);
        }
    }
    printf("\n");

    return 0;
}