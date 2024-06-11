#include <stdio.h>
  
int main() {
    int c, j, n, m;
   
    scanf("%d %d", &n, &m);
   
    int ma[n][m];
   
    for (c = 0; c < n; c++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &ma[c][j]);
        } 
    }
    
    int wally = 1;
    for (c = 0; c < n; c++) {
        for (j = 0; j < m; j++) {
            if (ma[c][j] == 1111) {
                if (
                    //   x                 f                  y                     z
                    ma[c-1][j] == 4 && (ma[c][j-1] == 0 || j-1<0) && (ma[c][j+1] == 0 || j+1>m-1) && (ma[c+1][j] == 8 || c+1>n-1) ||
                    (ma[c-1][j] == 0 || c-1<0) && ma[c][j-1] == 4 && (ma[c][j+1] == 8 || j+1>m-1) && (ma[c+1][j] == 0 || c+1>n-1) ||
                    (ma[c-1][j] == 8 || c-1<0) && (ma[c][j-1] == 0 || j-1<0) && (ma[c][j+1] == 0 || j+1>m-1) && ma[c+1][j] == 4 ||
                    (ma[c-1][j] == 0 || c-1<0) && (ma[c][j-1] == 8 || j-1<0) && ma[c][j+1] == 4 && (ma[c+1][j] == 0 || c+1>n-1)
                ) {
                    printf("%d %d", c, j);
                    wally = 0;
                    break;
                }
                
            }
        } 
    }
    if (wally) printf("WALLY NAO ESTA NA MATRIZ");
    
 
    
    
 
    return 0;
}