#include <stdio.h>
#include <ctype.h>
#include <string.h>



int main() {

    int n, c, s;
    char numS[99999];

    do {
        s = 0;

        for (c = 1; c <= 2; c++) {
            scanf("%d", &n);
            s += n;
        }

        if (s != 0) {
            sprintf(numS, "%d", s);

            int tam = strlen(numS);

            for (c = 0; c < tam; c++) {
                if (numS[c] != '0') printf("%c", numS[c]); 
            }
            printf("\n");
        }
    } while (s != 0);
    



    return 0;
}