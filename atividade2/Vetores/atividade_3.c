#include <stdio.h>
 
int main() {

    int n, c;

    scanf("%d", &n);

    int v[n];

    for (c = 0; c <= n - 1; c++) {
        scanf("%d", &v[c]);
    }

    for (c = n - 1; c >= 0; c--) {
        printf("%d ", v[c]);
    }

    return 0;
}