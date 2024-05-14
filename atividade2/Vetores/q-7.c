#include <stdio.h>
 
int main() {

    int c, n, maior, j;

    do {
        maior = 0;

        do {
            scanf("%d", &n);
        } while (n < 1 && n > 10000);


        int v[n];

        for (c = 0; c <= n - 1; c++) {
            scanf("%d", &v[c]);
        }

        for (c = 0; c <= n - 1; c++) {
            if (maior < v[c]) maior = v[c];
        }

        for (c = 0; c <= maior; c++) {
            int ocorrencias = 0;

            for (j = 0; j <= n - 1; j++) {
                if (v[j] <= c) ocorrencias++;
            }


            if (n != 0) printf("(%d) %d\n", c, ocorrencias);
        }

    } while (n != 0);
    

    



    return 0;
}