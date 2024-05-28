#include <stdio.h>
#include <math.h>
 
int main() {
 
    int c, j; 
    int ma[6][6];


    for (c = 0; c < 6; c++) {
        for (j = 0; j < 6; j++) {
            scanf("%d", &ma[c][j]);
        }
    }

    int i, k;

    for (c = 0; c < 6; c++) {
        for (j = 0; j < 6; j++) {
            if (ma[c][j] != 0) {
                i = c;
                break;
            }
        }
    }

    return 0;
}