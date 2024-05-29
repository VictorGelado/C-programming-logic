#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>



int main() {

    int i, j;
    char str[50];

    while (fgets(str, sizeof(str), stdin) != NULL) {
        int upper = 1; 
        for (i = 0; str[i] != '\0'; i++) {
            if (upper) {
                printf("%c", toupper(str[i]));
            } else {
                printf("%c", tolower(str[i]));
            } 
            
            if (str[i] != ' ') upper = !upper;
        }
    }


    return 0;
}