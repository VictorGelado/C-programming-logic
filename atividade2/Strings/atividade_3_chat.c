#include <stdio.h>
#include <ctype.h>
#include <string.h>

const char vogais[5] = {'a', 'e', 'i', 'o', 'u'};
const char consoantes[21] = {'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'y', 'z'};


int main() {
    int N, i;
    scanf("%d", &N);

    while (N--) {
        char texto[10001];
        scanf(" %[^\n]", texto);

        int letras = 0, vogais = 0, consoantes = 0;
        for (i = 0; texto[i] != '\0'; i++) {
            if (isalpha(texto[i])) { 
                letras++;
                if (tolower(texto[i]) == 'a' || tolower(texto[i]) == 'e' || tolower(texto[i]) == 'i' ||
                    tolower(texto[i]) == 'o' || tolower(texto[i]) == 'u') {
                    vogais++;
                } else {
                    consoantes++;
                }
            }
        }

        printf("Letras = %d\n", letras);
        printf("Vogais = %d\n", vogais);
        printf("Consoantes = %d\n", consoantes);
    }

    return 0;
}