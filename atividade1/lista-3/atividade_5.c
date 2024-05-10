#include <stdio.h>
#include <math.h>

int main() {

    int a1, r, n, c;
    int s = 0;

    scanf("%d %d %d", &a1, &r, &n);

    for (c = 1; c <= n; c++) {
        int numero = a1 + ((c - 1) * r);

        s += numero;
    }

    printf("%d\n", s);
    
    


    return 0;
}