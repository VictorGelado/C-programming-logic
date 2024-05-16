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
    for (c = 1; c < n; c++) {
        int idx = c - 1;

        int d = sqrt(pow((pontos[idx] - pontos[idx + 3]), 2) + pow((pontos[idx + 1] - pontos[idx + 4]), 2) + pow((pontos[idx + 2] - pontos[idx + 5]), 2));

        printf("%.2lf\n", d);
    }

    return 0;
}