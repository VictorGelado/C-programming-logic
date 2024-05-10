#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void) {
    int n, f = 1, c;

    scanf("%d", &n);

    if (n == 0) {
        f = 1;
    } else {
        for (c = 1; c < n; c++) {
            f *= (n - c);
        }

        f *= n;
    }


    printf("%d!  = %d", n, f);


    return 0;
}

