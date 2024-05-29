#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>



int main() {

    int n, x, y, c;

    scanf("%d", &n);

    
    while (n--) {
        scanf("%d %d", &x, &y);

        char s[100000] = "";
            
        int maior = x < y? y: x;
        int menor = x > y? y: x;

        
        for (c = menor; c <= maior; c++) {
            sprintf(s + strlen(s), "%d", c);           
        }

        int len = strlen(s);

        printf("%s", s);

        for (c = len - 1; c >= 0; c--) { 
            printf("%c", s[c]);
        }

        printf("\n");
    }



    return 0;
}