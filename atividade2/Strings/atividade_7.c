#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

char *prefixoString(int n, char *f) {
    char *prefixo = NULL;
    
    prefixo = (char *)malloc((n + 1) * sizeof(char));
    if (prefixo == NULL) {
        return NULL;
    }

    strncpy(prefixo, f, n);
    prefixo[n] = '\0';

    return prefixo;
}


int main() {

    int n;

    scanf("%d", &n);
    getchar();



    while (n--) {

        char linha[500];
        fgets(linha, sizeof(linha), stdin);

        int q;
        char f[499];

        sscanf(linha, "%d %[^\n]", &q, f);

        char *prefixo = prefixoString(q, f);

        if (prefixo != NULL) {
            printf("%s\n", prefixo);
            free(prefixo);
        }
    }

    return 0;
}