#include <stdio.h>
 
int main() {

    int c, n, s = 0;

    do {
        scanf("%d", &n);
    } while (!(n < 5000));

    int v[n];

    for (c = 0; c <= n - 1; c++) {
        scanf("%d", &v[c]);
    }

    for (c = 0; c <= n - 1; c++) {
        s += v[c];
    }

    printf("%d", s);

    return 0;
}