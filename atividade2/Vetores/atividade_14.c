#include <stdio.h>
#include <math.h>
 
int main() {
    int n, c, j;
 
    scanf("%d", &n);
 
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
    

    if (n % 2 == 0) {
        int idx = n / 2;
        int idx1 = idx - 1;
        double media = ((double) v[idx1] + (double) v[idx])/2.0;

        printf("%.2lf", media);
    } else {
        int idx = n / 2;
        double resu = (double) v[idx];

        printf("%.2lf", resu);
    }




    return 0;
}