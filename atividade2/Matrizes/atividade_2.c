#include <stdio.h>
 
int main() {
 
    int n, c, j; 

    scanf("%d", &n);

    int m[n][n];

    for (c = 0; c < n; c++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &m[c][j]); 
        }
    }

    for (c = 0; c < n; c++) {
        for (j = 0; j < n; j++) {
            if (c == j) printf("%d\n", m[c][j]); 
        }
    }

    return 0;
}