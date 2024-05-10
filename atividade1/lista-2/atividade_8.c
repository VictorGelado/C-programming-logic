#include <stdio.h>

int main(void) {

  int x;

  scanf("%d", &x);

  if (x % 4 == 0 && x % 100 != 0) printf("ANO BISSEXTO\n");
  else if (x % 100 == 0 && x % 400 == 0) printf("ANO BISSEXTO\n");
  else printf("ANO NAO BISSEXTO\n");

  return 0;
}