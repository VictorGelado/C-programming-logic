#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
int potenciaRecursiva(int p, int v, int poten, int c) {
    if (poten == 0) return 1;

    p*=v;

    if (c == poten) return p;

    return potenciaRecursiva(p, v, poten, c+1);
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
        int v, poten;

        scanf("%d %d", &v, &poten);

        printf("%d\n", potenciaRecursiva(1, v, poten, 1));
    }
 
    return 0;
}