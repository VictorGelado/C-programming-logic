#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
 
int isHi(int j, char *s, int qtdP) {
    int qtd = qtdP;
 
    int c = ++j;
 
    if (tolower(s[c]) == 'h' && tolower(s[c+1]) == 'i') qtd++; 
 
    if (c == strlen(s)) return qtd;
    
    isHi(c, s, qtd);
}
 
int main() {
 
    int n;
 
    char s[5000];
    
    scanf("%d", &n);
 
    while (n--) {
        getchar();
        scanf("%[^\n]", s);
  
        printf("%d\n", isHi(-1, s, 0));
    }
    
 
 
 
 
 
    return 0;
}