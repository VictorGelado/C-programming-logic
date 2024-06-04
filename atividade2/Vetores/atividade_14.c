#include <stdio.h>
 
int main() {
    int n, c, j;
 
    scanf("%d", &n);
 
    int v[n];


    for (c = 0; c < n; c++) {
        scanf("%d", &v[c]);
    }

    

    if (n % 2 == 0) {

        for (c = 0; c < n; c++) {
            for (j = c + 1; j < n; j++) {
                if (v[c] > v[j]) {
                    int temp = v[c];
                    v[c] = v[j];
                    v[j] = temp;
                }
            
            }      
        }

        int idx = n / 2;
        int idx1 = idx - 1;
        double media = ((double) v[idx1] + (double) v[idx])/2.0;

        printf("%.2f\n", media);
    } else {
        int idx = n / 2;

        printf("%d\n", v[idx]);
    }




    return 0;
}