#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float converteTemperatura(float);

main ()
{
 float temperatura, resultado;
 printf("Digite a temperatura em Celsius: ");
 scanf("%f", &temperatura);
 resultado = converteTemperatura(temperatura);
 printf("Temperatura em fahrenheit: %f", resultado);
}

float converteTemperatura(float temperatura)
{
 return 1.8 * temperatura + 32;
}
