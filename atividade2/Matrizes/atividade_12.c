#include <stdio.h>
  
int main() {
    int c, j, n;
   
    scanf("%d", &n);

    n++;

    int ma[n][n];

    for (c = 0; c < n; c++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &ma[c][j]);
        }   
    }

    for (c = 0; c < n; c++) {
        if (c > 0) printf("\n");
        for (j = 1; c < n; j++) {
            int qtdCameras = 0;

            qtdCameras += (ma[c][j-1] + ma[c][j] + ma[c+1][j-1] + ma[c+1][j+1]);   

            if (qtdCameras>=2) printf("S");
            else printf("U");
        }
    }

    printf(" d d");

    
 
    
    
 
    return 0;
}