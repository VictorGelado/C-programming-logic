#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
 

 
int main() {
 
    int n;
 
    char s[5000];
    
    scanf("%d", &n);
 
    while (n--) {
        getchar();
        scanf("%[^\n]", s);
  
        printf("%d\n", isHi(-1, s, 0));
    }
    
 
 
 
 
 
    return 0;
}