#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
int somaRecursiva(int j, int num, int soma) {
    int c = ++j;

    soma+=c;

    if (c == num) return soma;

    somaRecursiva(c, num, soma);
}

int main() {
 
    int n, num;
    
    scanf("%d", &n);
 
    while (n--) {
        getchar();
        scanf("%d", &num);
  
        printf("%d\n", somaRecursiva(-1, num, 0));
    }
    
 
 
 
 
 
    return 0;
}