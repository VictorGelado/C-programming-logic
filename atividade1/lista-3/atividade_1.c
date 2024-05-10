#include <stdio.h>
#include <stdlib.h>
#include <string.h>

double arrecadacaoJogos();
double calcularArrecadacao(int qtdPessoas, double catPop, double catGer, double catArq, double catCad);

int main(void) {

    int casos;

    scanf("%d", &casos);

    char *arrecadacaoTotal = malloc(1); 
    arrecadacaoTotal[0] = '\0'; 

    int c;

    for (c = 0; c < casos; c++) {
        char temp[150];
        sprintf(temp, "A RENDA DO JOGO N. %d E = %.2lf\n", (c + 1), arrecadacaoJogos());

        size_t tamanho_atual = strlen(arrecadacaoTotal);
        size_t tamanho_temp = strlen(temp);
        arrecadacaoTotal = realloc(arrecadacaoTotal, tamanho_atual + tamanho_temp + 1);

        strcat(arrecadacaoTotal, temp);
    }

    printf("%s", arrecadacaoTotal);
    
    return 0;
}

double arrecadacaoJogos() {
    int qtdPessoas;
    double catPop, catGer, catArq, catCad;

    scanf("%d %lf %lf %lf %lf", &qtdPessoas, &catPop, &catGer, &catArq, &catCad);

    double arrecTotal = calcularArrecadacao(qtdPessoas, catPop, catGer, catArq, catCad);

    return arrecTotal;
}

double calcularArrecadacao(int qtdPessoas, double catPop, double catGer, double catArq, double catCad) {
    double arrecPop = (catPop / 100.0) * qtdPessoas * 1;
    double arrecGer = (catGer / 100.0) * qtdPessoas * 5;
    double arrecArq = (catArq / 100.0) * qtdPessoas * 10;
    double arrecCad = (catCad / 100.0) * qtdPessoas * 20;

    double arrecTotal = arrecPop + arrecGer + arrecArq + arrecCad;

    return arrecTotal;
}
