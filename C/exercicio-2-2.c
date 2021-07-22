#include <stdio.h>#include <stdlib.h>
#include <math.h>

float converterGrausEmRadianos(float);
float areaDoTriangulo(float, float, float);

main ()
{
 float ladoA, ladoB, angulo, anguloEmRad, area;
 printf("Digite o valor do angulo: ");
 scanf("%f", &angulo);
 printf("Digite o valor do lado a: ");
 scanf("%f", &ladoA);
 printf("Digite o valor do lado b: ");
 scanf("%f", &ladoB);
 anguloEmRad = converterGrausEmRadianos(angulo);
 area = areaDoTriangulo(ladoA, ladoB, anguloEmRad);
 printf("Area do triangulo: %.2f", area);
}

float converterGrausEmRadianos(float angulo)
{
 const float PI = 3.141592;
 return (PI * angulo) /180;
}

float areaDoTriangulo(float ladoA, float ladoB, float angulo)
{
 return (ladoA * ladoB * sin(angulo))/2;
}
