#include<stdio.h>

float imc(float peso, float altura)
{
    return (peso/(altura * altura));
}

main()
{
    float altura, peso, imcResult;

    printf("Digite o seu peso: ");
    scanf("%f", &peso);
    printf("Digite sua altura: ");
    scanf("%f", &altura);
    printf("\n");

    imcResult = imc(peso, altura);
	
	if(imcResult < 25) {
		printf("Obesidade ausente");
	} else if(imcResult >= 25 && imcResult < 30) {
		printf("Sobrepeso");
	} else if(imcResult >= 30 && imcResult < 35) {
		printf("Obesidade grau 1");
	} else if(imcResult >= 35 && imcResult < 40) {
		printf("Obesidade grau 2");
	} else {
		printf("Obesidade morbida");
	}
}
