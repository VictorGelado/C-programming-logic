#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
 
int quantos5(int j, char *s, int qtdP) {
    int qtd = qtdP;
 
    int c = ++j;
 
    if (s[c] == '5') qtd++; 
 
    if (c == strlen(s)) return qtd;
    
    quantos5(c, s, qtd);
}
 
int main() {
 
    int n;
 
    char s[5000];
    
    scanf("%d", &n);
 
    while (n--) {
        getchar();
        scanf("%[^\n]", s);
  
        printf("%d\n", quantos5(-1, s, 0));
    }
    
 
 
 
 
 
    return 0;
}