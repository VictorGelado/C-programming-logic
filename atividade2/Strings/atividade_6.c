#include <stdio.h>
#include <ctype.h>
#include <string.h>



int main() {

    int c, tam, isPali;
    char f[5000];

    while (fgets(f, 5000, stdin) != NULL) {
        isPali = 1;

        f[strcspn(f, "\n")] = '\0';

        tam = strlen(f);

        for (c = 0; c < tam; c++) {
            if (f[c] != f[tam - 1 - c]) {
                isPali = 0;
                break; 
            }
        }

        if (isPali) {
            printf("sim\n");
        } else printf("nao\n");
    }
    
    

    return 0;
}