#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

void str_clean(char *str, char *clr) {
    int map[256] = {0}, i; 

    for (i = 0; clr[i] != '\0'; i++) {
        map[(unsigned char)clr[i]] = 1;
    }

    int index = 0;
  
    for (i = 0; str[i] != '\0'; i++) {
        if (map[(unsigned char)str[i]] == 0) {
            str[index++] = str[i];
        }
    }
    str[index] = '\0'; 
}


int main() {

    char str[256]; 
    char clr[256];
    scanf("%[^\n]", str);
    scanf("\n%[^\n]", clr);
    str_clean(str, clr) ;
    printf("%s\n", str);

    return 0;
}