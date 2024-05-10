#include <stdio.h>
#include <math.h>

int main() {

  double massaObjetoToneladas, aceleracaoObjeto, tempoGasto;
  double v, s, w, vKm;

  scanf("%lf %lf %lf", &massaObjetoToneladas, &aceleracaoObjeto, &tempoGasto);

  v = (aceleracaoObjeto * tempoGasto);
  vKm = v * 3.6;
  s = (aceleracaoObjeto * pow(tempoGasto, 2)) / 2;
  w = ((massaObjetoToneladas * 1000.0) * pow(v, 2)) / 2.0;

  printf("VELOCIDADE = %.2lf\n", vKm);
  printf("ESPACO PERCORRIDO = %.2lf\n", s);
  printf("TRABALHO REALIZADO = %.2lf\n", w);

  return 0;
}