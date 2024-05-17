#include <stdio.h>
#include <string.h>

#define ONE 2
#define TWO 5
#define THREE 5
#define FOUR 4
#define FIVE 5
#define SIX 6
#define SEVEN 3
#define EIGHT 7
#define NINE 6
#define ZERO 6

int main(void){
    char vet[1000000];
    int tam, ent, i, j;
    int soma = 0;


    scanf("%d", &ent);
    for(i = 0; i< ent; i++)
    {
        soma = 0;
        scanf("%s", vet);
        tam = strlen(vet);
        for(j = 0; j< tam ; j++){
            if(vet[j] == '0')
                soma += ZERO;
            if(vet[j] == '1')
                soma += ONE;
            if(vet[j] == '2')
                soma += TWO;
            if(vet[j] == '3')
                soma += THREE;
            if(vet[j] == '4')
                soma += FOUR;
            if(vet[j] == '5')
                soma += FIVE;
            if(vet[j] == '6')
                soma += SIX;
            if(vet[j] == '7')
                soma += SEVEN;
            if(vet[j] == '8')
                soma += EIGHT;
            if(vet[j] == '9')
                soma += NINE;
        }
        printf("%d leds\n", soma);
    }




    return 0;
}