#include <stdio.h>
 
int main() {

    int n, c;

    do {
        scanf("%d", &n);
    } while (!(n < 5000));

    int v[n];

    for (c = 0; c <= n - 1; c++) {
        scanf("%d", &v[c]);
    }

    for (c = 0; c <= n - 1; c++) {
        printf("%d ", v[c]);
    }

    return 0;
}