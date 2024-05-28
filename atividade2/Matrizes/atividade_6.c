#include <stdio.h>
#include <math.h>
 
int main() {
 
    int c, j; 
    double ma[2][2];


    for (c = 0; c < 2; c++) {
        for (j = 0; j < 2; j++) {
            scanf("%lf", &ma[c][j]);
        }
    }

    for (c = 0; c < 2; c++) {
        if (c > 0) printf("\n");
        for (j = 0; j < 2; j++) {
            double a = ma[c][0] * ma[0][j] + ma[c][1] * ma[1][j];
            printf("%.3lf ", a);
        }
    }
    printf("\n");

    return 0;
}