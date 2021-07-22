#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float calculaDelta(float, float, float);

main ()
{
 float a, b, c, resultado;
 printf("Digite o valor de a: ");
 scanf("%f", &a);
 printf("Digite o valor de b: ");
 scanf("%f", &b);
 printf("Digite o valor de c: ");
 scanf("%f", &c);
 resultado = calculaDelta(a,b,c); printf("O delta e: %f", resultado);
}


float calculaDelta(float a, float b, float c)
{
 return pow(b,2) - 4*a*c;
}

