#include <stdio.h>
 
int main() {

    int n;
    char cadeia[50];

    scanf("%d", &n);


    for (int c = 0; c <= n; c++) {
        for (int c = 0; c <= 49; c++) {
            scanf("%s", &cadeia[c]);
        }
    }


    printf("%s", cadeia);
 
    return 0;
}