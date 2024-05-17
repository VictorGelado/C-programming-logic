#include <stdio.h>
#include <ctype.h>
#include <string.h>

const char vogais[5] = {'a', 'e', 'i', 'o', 'u'};
const char consoantes[21] = {'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'y', 'z'};


int main() {
    
    int n, c, j, k, tam, x = 0, y = 0, z = 0;
    char msg[10000];

    scanf("%d", &n);

    for (k = 1; k <= n; k++) {
        scanf("%s", msg);
        printf("\nk = %d\n", k);

        tam = strlen(msg);

        for (c = 0; c < tam; c++) {
            for (j = 0; j <= 4; j++) {
                if (vogais[j] == msg[c]) {
                    x++;
                    y++;
                }
            }

            for (j = 0; j <= 20; j++) {
                if (consoantes[j] == msg[c]) {
                    z++;
                    x++;
                }
            }
        }

        printf("Letras = %d\nVogais = %d\nConsoantes = %d", x, y, z);
    }
    


    return 0;
}