#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
int quantos5(int j, char *s, int qtd) { 
    if (s[j] == '5') qtd++;

    if (j==strlen(s)) return qtd;

    quantos5(++j, s, qtd);
}

 
int main() {
 
    int n;
 
    char s[5000];
    
    scanf("%d", &n);
 
    while (n--) {
        getchar();
        scanf("%[^\n]", s);
  
        printf("%d\n", quantos5(0, s, 0));
    }
    
 
 
 
 
 
    return 0;
}