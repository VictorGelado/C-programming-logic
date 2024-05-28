#include <stdio.h>
 
int main() {
 
    int m, n, c, j; 

    do {
        scanf("%d", &m);
    } while (m <= 0 || m > 10);
    
    do {
        scanf("%d", &n);
    } while (n <= 0 || n > 10);

    int ma[m][n];

    for (c = 0; c < m; c++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &ma[c][j]); 
        }
    }

    for (c = 0; c < m; c++) {
        printf("\n");
        printf("linha %d: ", c + 1); 

        for (j = 0; j < n; j++) {
            printf("%d", ma[c][j]);
            if (j < n - 1) printf(",");
        }
    }
    printf("\n");
    

    return 0;
}