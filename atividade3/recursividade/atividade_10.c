#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
void prefixoRecursivo(char *s, int j) {
    char s2[2000];

    int c = j;

    if (c == 0) return;

    strncpy(s2, s, j);

    s2[j] = '\0';

    printf("%s\n", s2);

    prefixoRecursivo(s, j-1);
}
 
void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}
 
int main() {
 
    int n, c;
    scanf("%d", &n);
    
 
    while (n--) {
        char s[2000];

        limparBuffer();

        scanf("%1999[^\n]", s);
        
        printf("Caso de teste %d\n", n+1);
        prefixoRecursivo(s, strlen(s));
        
    }
 
    return 0;
}