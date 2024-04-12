#include <stdio.h>
#include <stdlib.h>
#include <string.h>


float convFahrenheitCelsius(float fahrenheit) {
    return ((5 * (fahrenheit - 32)) / 9);
}

void lerGrausF(float *fahrenheit, float *celsius) {
    
    scanf("%f", fahrenheit);

    *celsius = convFahrenheitCelsius(*fahrenheit);
}



int main(void) {

    int qtdTemp;

    scanf("%d", &qtdTemp);

    char *tempConvertidas = malloc(1); 
    tempConvertidas[0] = '\0'; 

    int c;

    for (c = 0; c < qtdTemp; c++) {
        float fahrenheit;
        float celsius;

        lerGrausF(&fahrenheit, &celsius);

        char temp[150];
        sprintf(temp, "%.2f FAHRENHEIT EQUIVALE A %.2f CELSIUS\n", fahrenheit, celsius);

        size_t tamanho_atual = strlen(tempConvertidas);
        size_t tamanho_temp = strlen(temp);
        tempConvertidas = realloc(tempConvertidas, tamanho_atual + tamanho_temp + 1);

        strcat(tempConvertidas, temp);
    }

    printf("%s", tempConvertidas);
    
    return 0;
}
