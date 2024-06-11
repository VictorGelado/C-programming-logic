#include <stdio.h>


void organizarVetor(int *v, int tam) {
    int c, j, temp;
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


int main() {
    
    int c, j, n;
    
    do {
        scanf("%d", &n);
    } while (!(n >= 1 && n <= 1000));
    
    int v[n];
    int v2[n];
        
    for (c = 0; c < n; c++) {
        scanf("%d", &v[c]);
    }
    
    organizarVetor(v, n);
    
    int idxV2 = 0;
    for (c = 0; c < n; c++) {
        int unico = 0;
        
        for (j = 0; j < n; j++) {
            if (v[c] == v2[j]) {
                unico = 1;
                break;
            }
        }
        
        if (!unico) {
            v2[idxV2++] = v[c];
        }        
        
        
    }
    
    
    for (c = 0; c < idxV2; c++) {
        printf("%d\n", v2[c]);
    }
    


    return 0;
}
