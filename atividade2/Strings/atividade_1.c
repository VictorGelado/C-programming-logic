#include <stdio.h>
 
int main() {
 
    int n, c, j;
    char cadeia[50], valor, tamCad;
 
    scanf("%d", &n);
 
    while (getchar() != '\n');
 
 
    for (j = 1; j <= n; j++) {
        tamCad = 0;
        int boolValor = 1;
 
        char cadeia1[50] = {'\0'};
        char cadeia2[50] = {'\0'};
 
        do {
            scanf("%c", &valor);
            cadeia[tamCad++] = valor;
 
            boolValor = (valor != '\n' && valor != EOF);
        } while (boolValor);
 
        int segundaString = 0;
        int idxSegundaString = 0;
        int idxPrimeiraString = 0;
        for (c = 0; c < tamCad; c++) {
            if (cadeia[c] == ' ') segundaString = 1;
 
            if (segundaString) {
                if (cadeia[c] != ' ') cadeia2[idxSegundaString++] = cadeia[c];
            } else {
                if (cadeia[c] != ' ') {
                    cadeia1[c] = cadeia[c];
                    idxPrimeiraString++;
                }
            }
        }  
 
 
 
        idxSegundaString--;
        //printf("primeira: %d, segunda: %d\n", idxPrimeiraString, idxSegundaString);
        if (idxPrimeiraString < idxSegundaString) {
            for (c = 0; c < idxPrimeiraString; c++) {
                printf("%c%c", cadeia1[c], cadeia2[c]);
            }
 
            for (c; c < idxSegundaString; c++) {
                printf("%c", cadeia2[c]);
            }
        } else if (idxPrimeiraString > idxSegundaString) {
            for (c = 0; c < idxSegundaString; c++) {
                printf("%c%c", cadeia1[c], cadeia2[c]);
            }
 
            for (c; c < idxPrimeiraString; c++) {
                printf("%c", cadeia1[c]);
            }
        } else {
            for (c = 0; c < idxPrimeiraString; c++) {
                printf("%c%c", cadeia1[c], cadeia2[c]);
            }
        }
        printf("\n");
    }
 
 
 
    return 0;
}