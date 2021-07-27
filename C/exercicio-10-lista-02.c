#include<stdio.h>
#include<stdlib.h>

void adicaoRacionais(float numerador1, float denominador1, float numerador2, float denominador2, float *numeradorResultado, float *denominadorResultado) 
{
	*numeradorResultado = (numerador1 * denominador2 + numerador2 * denominador1);
	*denominadorResultado = (denominador1 * denominador2);
}

void subtracaoRacionais(float numerador1, float denominador1, float numerador2, float denominador2, float *numeradorResultado, float *denominadorResultado) {
	*numeradorResultado = (numerador1 * denominador2 - numerador2 * denominador1);
	*denominadorResultado = (denominador1 * denominador2);
}

void multiplicacao(float numerador1, float denominador1, float numerador2, float denominador2, float *numeradorResultado, float *denominadorResultado) {
	*numeradorResultado = numerador1 * numerador2;	
	*denominadorResultado = denominador1 * denominador2;
}

void divisao(float numerador1, float denominador1, float numerador2, float denominador2, float *numeradorResultado, float *denominadorResultado) {
	*numeradorResultado = numerador1 *denominador2; *denominadorResultado = numerador2 * denominador1;
} 

int main(void)
{
	float n1, d1, n2, d2, nR, dR;
	
	printf("Digite o numerador 1: ");
	scanf("%f", &n1);
	
	printf("Digite o denominador 1: ");
	scanf("%f", &d1);
	
	printf("Digite o numerador 2: ");
	scanf("%f", &n2);
	
	printf("Digite o denominador 2: ");
	scanf("%f", &d2);
	
	adicaoRacionais(n1, d1, n2, d2, &nR, &dR);
	printf("Resultado (adicao): %f/%f\n", nR, dR);
	
	subtracaoRacionais(n1, d1, n2, d2, &nR, &dR);
	printf("Resultado (subtracao): %f/%f\n", nR, dR);
	
	multiplicacao(n1, d1, n2, d2, &nR, &dR);
	printf("Resultado (multiplicacao): %f/%f\n", nR, dR);
	
	divisao(n1, d1, n2, d2, &nR, &dR);
	printf("Resultado (divisao): %f/%f", nR, dR);
	
	return 0;
}
