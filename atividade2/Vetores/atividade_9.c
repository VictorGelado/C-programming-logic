#include <stdio.h>
#include <math.h>
 
int main() {

    int n, c;

    do {
        scanf("%d", &n);
    } while (n < 2 || n > 1000);
    
    int tamanho = n * 3;
    double pontos[tamanho + 1];

    for (c = 0; c < tamanho; c++) {
        //do {
            scanf("%lf", &pontos[c]);
        //} while (!(pontos[c] >= -1000 || pontos[c] <= 1000));
    }


    // Mude isso
    for (c = 3; c < n*3; c+=3) {

        double d = sqrt(pow((pontos[c-3] - pontos[c]), 2) + pow((pontos[c - 3 + 1] - pontos[c + 1]), 2) + pow((pontos[c - 3 + 2 ] - pontos[c + 2]), 2)); 

        printf("%.2lf\n", d);
    }

    return 0;
}