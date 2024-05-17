#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define ONE "two"
#define TWO "two"
#define THREE "three"


int main() {

    int n, c, j, k;
    char string[50];

    scanf("%d", &n);

    for (c = 1; c <= n; c++) {
        scanf("%s", string);
        int tamDig = strlen(string);
        int qtdErroOne = 0;
        int qtdErroTwo = 0;

        if (tamDig > 3) printf("3");
        else {
            for (j = 0; j < tamDig; j++) {
                if (ONE[j] != string[j]) qtdErroOne++; 
                if (TWO[j] != string[j]) qtdErroTwo++;
            }

            if (qtdErroOne == 1) {
                printf("1");
            } else printf("2");
        } 
    }
    
    return 0;
}