#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
int somaOrelhas(int s, int c, int n) {
    if (c%2==0) {
        s+=3;
    } else {
        s+=2;
    }

    if (c == n) return s;

    somaOrelhas(s, ++c, n);
}
 
int main() {
 
    int n;
    
    scanf("%d", &n);
 
    while (n--) {
        int num;

        getchar();
        scanf("%d", &num);

        printf("%d\n", somaOrelhas(0, 1, num));
   
    }
    
 
 
 
 
 
    return 0;
} 