#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

#define QTDLETRAS 26
const char alfabeto[] = "abcdefghijklmnopqrstuvwxyz";

int main() {
    int n, i;
    scanf("%d", &n);
    getchar(); 

    while (n--) {
        char str[200];
        int indiceLetrasMaisRepetidas[QTDLETRAS] = {0}; 

        fgets(str, sizeof(str), stdin);

        for (i = 0; str[i] != '\0'; i++) {
            char c = tolower(str[i]);
            if (isalpha(c)) { 
                indiceLetrasMaisRepetidas[c - 'a']++; 
            }
        }

        int maior = 0;
        for (i = 0; i < QTDLETRAS; i++) {
            if (indiceLetrasMaisRepetidas[i] > maior) {
                maior = indiceLetrasMaisRepetidas[i];
            }
        }

        for (i = 0; i < QTDLETRAS; i++) {
            if (indiceLetrasMaisRepetidas[i] == maior) {
                printf("%c", 'a' + i);
            }
        }
        printf("\n");
    }
    return 0;
}
