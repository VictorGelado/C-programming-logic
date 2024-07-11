#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
int produtoRecursivo(int m, int n, int p) {
    if (n == 0) return p;

    p+=m;

    produtoRecursivo(m, n-1, p);
}

 
void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}
 
int main() {
 
    int n, c;
    scanf("%d", &n);
    
 
    while (n--) {
        int m, n1;

        limparBuffer();

        scanf("%d %d", &m, &n1);
        
        printf("%d\n", produtoRecursivo(m, n1, 0));     
    }
 
    return 0;
}