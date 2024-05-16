#include <stdio.h>
 
int main() {

    int n = 1, c, maior; 
    int indiceMaior;   

    

    while (1) {
        maior = 0;
        indiceMaior = NULL;

        scanf("%d", &n);

        if (!n) break;

        int v[n];

        for (c = 0; c <= n - 1; c++) {
            scanf("%d", &v[c]);
        }

        for (c = 0; c <= n - 1; c++) {
            if (maior < v[c]) maior = v[c];
        }

        for (c = 0; c <= n - 1; c++) {
            if (v[c] == maior) {
                indiceMaior = c;
                break;
            }
        }

        printf("%d %d\n", c, maior);
        
    }



    

    return 0;
}