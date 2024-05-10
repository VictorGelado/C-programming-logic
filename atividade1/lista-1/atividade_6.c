#include <stdio.h>
#include <math.h>

int main() {

    int seg, min, hor;

    scanf("%d %d %d", &hor, &min, &seg);

    int totalSeg = (hor*60*60) + (min * 60) + seg;

    printf("O TEMPO EM SEGUNDOS E = %d\n", totalSeg);


    return 0;
}