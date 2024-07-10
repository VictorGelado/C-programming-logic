#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
 
int isX(int j, char *s, int qtdP) {
    int qtd = qtdP;
 
    int c = ++j;
 
    if (tolower(s[c]) == 'x') qtd++; 
 
    if (c == strlen(s)) return qtd;
    
    isX(c, s, qtd);
}
 
int main() {
 
    int n;
 
    char s[5000];
    
    scanf("%d", &n);
 
    while (n--) {
        getchar();
        scanf("%[^\n]", s);
 
        printf("%d\n", isX(-1, s, 0));
    }
    
 
 
 
 
 
    return 0;
}