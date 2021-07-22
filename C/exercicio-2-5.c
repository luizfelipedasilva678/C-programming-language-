#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float volumeEsfera(float);

main ()
{
 float raio, resultado;
 printf("Digite o raio: ");
 scanf("%f", &raio);
 resultado = volumeEsfera(raio);
 printf("Resultado: %f", resultado);
}

float volumeEsfera(float raio)
{
 const float PI = 3.141592;
 return (4 * PI * pow(raio, 3)) /3;
}
