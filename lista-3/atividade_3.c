#include <stdio.h>
#include <math.h>

int main() {

    int numero, c;

    scanf("%d", &numero);
    
    for (c = 0; c <= numero; c++) {
        if (c % 2 == 0 && c != 0) printf("%d^2 = %d\n", c, (int) pow(c, 2));
    }


    return 0;
}