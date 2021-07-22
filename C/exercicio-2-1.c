#include <stdio.h>
#include <stdlib.h>

float converterGrausEmRadianos(float);

main ()
{
 float angulo, anguloEmRad;
 printf("Digite um angulo: ");
 scanf("%f", &angulo);
 anguloEmRad = converterGrausEmRadianos(angulo);
 printf("Seu angulo em radiano e: %f", anguloEmRad);
}

float converterGrausEmRadianos(float angulo)
{
 const float PI = 3.141592;
 return (PI * angulo) /180;
}

