#include <stdio.h>

int main(void) {
  float nota1, nota2, nota3, x;

  scanf("%f %f %f", &nota1, &nota2, &nota3);

  x = (nota1 + nota2 + nota3) / 3;

  printf("MEDIA = %.2f\n", x);

  if (x >= 6.0) {
    printf("APROVADO\n");
  } else printf("REPROVADO\n");

  return 0;
}