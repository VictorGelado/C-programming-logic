#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

#define QTDLETRAS 26
const char alfabeto[] = "abcdefghijklmnopqrstuvwxyz";

int main() {

    int c, n, j;
    
    scanf("%d", &n);

    while (n--) {
        char str[200];
        int indiceLetrasMaisRepetidas[QTDLETRAS] = {0};
        int maioresIndice[26] = {0};

        getchar();
        scanf("%s", str);

        
        for (j = 0; str[j] != '\0'; j++) {

            for (c = 0; alfabeto[c] != '\0'; c++) {
                if (alfabeto[c] == tolower(str[j]) && isalpha(tolower(str[j]))) {
                    indiceLetrasMaisRepetidas[c]++;
                }
            }           

        }

        int maior = 0;
        for (c = 0; c < QTDLETRAS; c++) {
            printf("\nindx: %d", indiceLetrasMaisRepetidas[c]);
            if (maior < indiceLetrasMaisRepetidas[c]) maior = indiceLetrasMaisRepetidas[c]; 
        } 

        for (c = 0; c < QTDLETRAS; c++) {
            if (indiceLetrasMaisRepetidas[c] == maior && maior != 0) printf("%c", alfabeto[c]); 
        }

        printf("\n");
    }
    

    return 0;
}