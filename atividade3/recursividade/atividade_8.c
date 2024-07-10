#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
int ePalidromo(int c, char *s, int qtd) {
    if (c >= qtd / 2) return 1;
 
    int oposto = qtd - 1 - c;
 
    if (tolower(s[c]) != tolower(s[oposto])) {
        return 0;
    }
 
    return ePalidromo(c + 1, s, qtd);
}
 
void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}
 
int main() {
 
    int n;
    scanf("%d", &n);
    limparBuffer();
 
    while (n--) {
        int tam;
        scanf("%d", &tam);
        limparBuffer(); 
 
        char s[2001]; 
        int j = 0;
 
        while (j < tam) {
            scanf(" %c", &s[j]);
            j++;
        }
        s[j] = '\0'; 
 
        int pali = ePalidromo(0, s, tam);
 
        if (pali) {
            printf("PALINDROMO\n");
        } else {
            printf("NAO PALINDROMO\n");
        }
 
        limparBuffer();
    }
 
    return 0;
}