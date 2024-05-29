#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
 
#define QTDLETRAS 26
const char alfabeto[] = "abcdefghijklmnopqrstuvwxyz";
 
void indiceLetraAlfabeto(int *idx, char l) {
    int c;
    for (c = 0; c < 26; c++) {
        if (alfabeto[c] == l) {
            *idx = c;
            break;
        }
    }
}
 
int main() {
 
    int n, c, j;
 
    int tam = pow(10, 4);
 
    char a[tam], b[tam];
    
    scanf("%d", &n);
 
    while (n--) {
        scanf("%s", a);        
        scanf("%s", b);
 
        int idxA = 0;        
        int idxB = 0;
        int qtd = 0;
 
//        indiceLetraAlfabeto(&idxA, 'f');
 
        for (c = 0; a[c] != '\0'; c++) {
            if (a[c] != b[c]) {
                indiceLetraAlfabeto(&idxA, a[c]);
                indiceLetraAlfabeto(&idxB, b[c]);
 
                
                int diff = idxB - idxA;
                if (diff < 0) diff += 26;
                qtd += diff;
            }
        }
 
        printf("%d\n", qtd);
    }
    
    
    return 0;
}