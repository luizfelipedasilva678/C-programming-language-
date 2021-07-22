#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float calculaDistanciaEntrePontos(float,float,float,float);

main ()
{
 float xA, xB, yA, yB, resultado;
 printf("Digite xA: ");
 scanf("%f", &xA);
 printf("Digite yA: ");
 scanf("%f", &yA);
 printf("Digite xB: ");
 scanf("%f", &xB);
 printf("Digite yB: "); scanf("%f", &yB);
 resultado = calculaDistanciaEntrePontos(xA, yA, xB, yB);
 printf("A distancia entre os pontos e: %f", resultado);
}

float calculaDistanciaEntrePontos(float xA,float yA,float xB,float yB)
{
 return sqrt( pow((xA - xB),2) + pow((yA - yB),2) );
}
