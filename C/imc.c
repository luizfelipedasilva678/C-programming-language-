#include<stdio.h>

float imc(float peso, float altura)
{
    return (peso/(altura * altura));
}

int main(void)
{
    float altura, peso, imcResult;

    printf("Digite o seu peso: ");
    scanf("%f", &peso);
    printf("Digite sua altura: ");
    scanf("%f", &altura);
    printf("\n");

    imcResult = imc(peso, altura);

    printf("Seu IMC e de: %f", imcResult);
    printf("\n\n");
    printf(" VALORES DE IMC \n Abaixo do peso: menor que 18,5 \n Normal: entre 18,5 e 24,9 \n Acima do peso: entre 25 e 29,9 \n Obeso: 30 ou mais");
    printf("\n\n");
    
    return 0;
}
