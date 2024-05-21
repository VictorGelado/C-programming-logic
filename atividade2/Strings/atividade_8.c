#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int inString(char c, char *f) {
    int in = 0;
    int j, tam = strlen(f);

    if (isspace(c)) {
        for (j = 0; j < tam; j++) {
            if (isspace(f[j])) return j;
        }
    } else {
        for (j = 0; j < tam; j++) {
            if (c == f[j]) return j;
        }
    }


    return -1;
}


int main() {

    int n;

    scanf("%d", &n);
    getchar();


    while (n--) {
        char f[500], c;
        scanf("%c", &c);
        getchar();

        fgets(f, sizeof(f), stdin);

        int g = inString(c, f);

        g == -1? printf("Caractere %c nao encontrado.\n", c): printf("Caractere %c encontrado no indice %d da string.\n", c, g);
    }




    return 0;
}