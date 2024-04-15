#include <stdio.h>

int main() {
    int popA, popB;
    int anos = 0;

    scanf("%d", &popA);
    scanf("%d", &popB);

    while (popA <= popB) {
        anos++;
        popA *= 1.03; 
        popB *= 1.015; 
    }

    printf("ANOS = %d\n", anos);

    return 0;
}
