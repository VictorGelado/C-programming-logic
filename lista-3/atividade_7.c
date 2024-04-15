#include <stdio.h>
#include <math.h>

int main() {
    
    int m, pre;
    double p1, p2, p3, p4, p5, p6, p7, p8, l1, l2, l3, l4, l5, tf;
    double nf, mp, ml, nt;

    int numVer = 1;


    char *situacaoAlunos = malloc(1); 
    situacaoAlunos[0] = '\0';


    do {
        scanf("%d %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %d", &m, &p1, &p2, &p3, &p4, &p5, &p6, &p7, &p8, &l1, &l2, &l3, &l4, &l5, &tf, &pre);
        
        mp += (p1 + p2 + p3 + p4 + p5 + p6 + p7 + p8) / 8.0;
        mp += (l1 + l2 + l3 + l4 + l5) / 5.0;


        nf = 0.7 * mp + 0.15 * ml + 0.15 * nt;

        char *situacaoFinal = "";


        if (nf >= 6 && (((75/100) * 128) <= pre))  {
            situacaoFinal = "APROVADO";
        } else if ((((75/100) * 128) > pre) && nf >= 6) {
            situacaoFinal = "REPROVADO POR FREQUENCIA";
        } else if ((((75/100) * 128) <= pre) && nf < 6) {
            situacaoFinal = "REPROVADO POR NOTA";
        } else {
            situacaoFinal = "REPROVADO POR NOTA E POR FREQUENCIA";
        }


        char temp[150];
        sprintf(temp, "Matricula: %d, Nota Final: %.2lf, Situacao Final: %s\n", m, nf, situacaoFinal);

        size_t tamanho_atual = strlen(situacaoAlunos);
        size_t tamanho_temp = strlen(temp);
        situacaoAlunos = realloc(situacaoAlunos, tamanho_atual + tamanho_temp + 1);

        strcat(situacaoAlunos, temp);


        if (
            p1 == -1 && l1 == -1 &&
            p2 == -1 && l2 == -1 &&
            p3 == -1 && l3 == -1 &&
            p4 == -1 && l4 == -1 &&
            p5 == -1 && l5 == -1 &&
            p6 == -1 && tf == -1 &&
            p7 == -1 && pre == -1 &&
            p8 == -1 && m == -1
        ) {
            numVer = 0;
        }

    } while (numVer);

    

    return 0;
}
