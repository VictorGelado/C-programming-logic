#include <stdio.h>
#include <math.h>


void organizarVetor(double *v, int tam) {
    int c, j;
    double temp;
    for (c = 0; c < tam; c++) {
        for (j = c + 1; j < tam; j++) {
            if (v[c] > v[j]) {
                temp = v[j];
                v[j] = v[c];
                v[c] = temp;
            }    
        }
    }
}

void transfomarPar(double *n) {
    if (*n < 0.0) {
        *n *= -1.0;
    }
}

int main() {
    
    int c, j, n;
    
    scanf("%d", &n);
    
    n*=3;
    
    double v[n];
    
    for (c = 0; c < n; c++) {
        scanf("%lf", &v[c]);
    }
    
    
    for (c = 0; c < n-3; c+=3) {
        double a = v[c + 3] - v[c];
        double b = v[c + 4] - v[c + 1];
        double c2 = v[c + 5] - v[c + 2];
        
        
        transfomarPar(&a);
        transfomarPar(&b);
        transfomarPar(&c2);
        
        double vResult[3] = {a, b, c2};
        
        organizarVetor(vResult, 3);
        
        printf("%.2lf\n", vResult[2]);
    }
   
     

    return 0;
}
