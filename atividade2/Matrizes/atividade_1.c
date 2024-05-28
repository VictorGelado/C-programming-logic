#include <stdio.h>
 
int main() {
 
    int c, j;
    double m[2][2], d;

    for (j = 0; j < 2; j++) {
        for (c = 0; c < 2; c++) { 
            scanf("%lf", &m[j][c]);
        }
    }

    d = m[0][0] * m[1][1] - m[0][1] * m[1][0];

    printf("%.2lf\n", d);


    return 0;
}