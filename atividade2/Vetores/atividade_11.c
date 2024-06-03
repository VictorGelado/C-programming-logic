#include <stdio.h>
#include <math.h>
 
int main() {

    int n, c, maiorElemento = -999999999, menorElemento = 99999;

    scanf("%d", &n);

    int v[n];
    int w[n];

    for (c = 0; c < n; c++) {
        scanf("%d", &v[c]);

        if (v[c] > maiorElemento) maiorElemento = v[c];
        if (v[c] < menorElemento) menorElemento = v[c];
        
        w[n - c - 1] = v[c];
    }

    for (c = 0; c < n; c++) {
        c == n - 1? printf("%d\n", v[c]): printf("%d ", v[c]);
    }

    for (c = 0; c < n; c++) {
        c == n - 1? printf("%d\n", w[c]): printf("%d ", w[c]);
    }

    printf("%d\n", maiorElemento);

    printf("%d\n", menorElemento);



    return 0;
}