#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
int pisoLog2(int qtdDiv, int quo) {
    quo/=2;
 
    qtdDiv++;
 
    if (quo == 1) return qtdDiv;
 
    pisoLog2(qtdDiv, quo);
 
}
 
int main() {
 
    int n;
    
    scanf("%d", &n);
 
    while (n--) {
        int num;
 
        getchar();
        scanf("%d", &num);
 
        printf("%d\n", pisoLog2(0, num));
   
    }
    
 
 
 
 
 
    return 0;
} 