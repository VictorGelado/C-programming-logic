#include <stdio.h>

int main(void) {
    int numero;
  
    scanf("%d", &numero);
    if (numero > 9999 || numero <= 0) {
        printf("Numero invalido!");
        return 0;
    }

    int milhar = numero / 1000;
    int resto = numero % 1000;
    int centena = resto / 100;
    resto %= 100;
    int dezena = resto / 10;
    int unidade = resto % 10;

    char *ordem;
    if (numero > 999)
        ordem = "quarta ordem";
    else if (numero > 99)
        ordem = "terceira ordem";
    else if (numero > 9)
        ordem = "segunda ordem";
    else
        ordem = "primeira ordem";

    char *milharS = (milhar == 1) ? "unidade de milhar" : "unidades de milhar";
    char *centenaS = (centena == 1) ? "centena" : "centenas";
    char *dezenaS = (dezena == 1) ? "dezena" : "dezenas";
    char *unidadeS = (unidade == 1) ? "unidade" : "unidades";
    
    printf("(%s) %d = ", ordem, numero);
    
    if (milhar > 0)
        printf("%d %s", milhar, milharS);

    if (centena > 0)
        printf("%s%d %s", (milhar > 0) ? " + " : "", centena, centenaS);
    
    if (dezena > 0)
        printf("%s%d %s", (milhar > 0 || centena > 0) ? " + " : "", dezena, dezenaS);
    
    if (unidade > 0)
        printf("%s%d %s", (milhar > 0 || centena > 0 || dezena > 0) ? " + " : "", unidade, unidadeS);
    
    printf(" = ");

    if (milhar > 0)
        printf("%d", milhar * 1000);

    if (centena > 0)
        printf("%s%d", (milhar > 0) ? " + " : "", centena * 100);

    if (dezena > 0)
        printf("%s%d", (milhar > 0 || centena > 0) ? " + " : "", dezena * 10);

    if (unidade > 0)
        printf("%s%d", (milhar > 0 || centena > 0 || dezena > 0) ? " + " : "", unidade);
    
    printf("\n");

    return 0;
}
