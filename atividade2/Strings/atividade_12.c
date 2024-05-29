#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
 

 
int main() {

    int c;
    char str[6000];
    char pLetras[1000] = {};



    while (fgets(str, 5000, stdin) != NULL) {
        
        int idx = 0;
        
        
        for (c = 0; str[c] != '\0'; c++) {
            if (c == 0 || str[c - 1] == ' ') {
                pLetras[idx++] = tolower(str[c]);
            }
        }

        pLetras[idx] = '\0'; 

        int qtd = 0;
        char ant = '\0';

        for (c = 1; c < strlen(pLetras); c += 2) {
            if (c > idx) {
                if (pLetras[c-1] == pLetras[c-1] && ant != pLetras[c - 2]) qtd++;
            }
            else if (pLetras[c] == pLetras[c-1] && ant != pLetras[c - 2]) qtd++;


        }

        
        
        printf("%d\n", qtd);
    }   

    return 0;
}