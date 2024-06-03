#include <stdio.h>
#include <math.h>
 
int main() {

    int n, c, j;

    do {
        scanf("%d", &n);
    } while (!(n <= 1000 && n > 1));

    int v[n];

    for (c = 0; c < n; c++) {
        scanf("%d", &v[c]);
    }

    for (c = 0; c < n; c++) {
        for (j = c + 1; j < n; j++) {
            if (v[c] > v[j]) {
                int temp = v[c];
                v[c] = v[j];
                v[j] = temp;
            }
            
        }      
    }

    for (c = 0; c < n; c++) {
        printf("%d\n", v[c]);
    }




    return 0;
}