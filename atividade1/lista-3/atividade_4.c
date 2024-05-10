#include <stdio.h>
#include <math.h>

int main() {

    int x, y, c;

    scanf("%d %d", &x, &y);
    
    if (x % 2 != 0) printf("O PRIMEIRO NUMERO NAO E PAR");
    else {
        int numTemp = x;

        for (c = 0; c < y; c++) {
            printf("%d ", numTemp);
            numTemp += 2;
        }

        printf("\n");
    }


    return 0;
}