#include<stdio.h>
#include<stdlib.h>

typedef struct _fracao {
	float numerador;
	float denomidador;
} Fracao;

Fracao adicaoRacionais(float numerador1, float denominador1, float numerador2, float denominador2, float numeradorResultado, float denominadorResultado) 
{
	Fracao rF;
	rF.numerador = (numerador1 * denominador2 + numerador2 * denominador1);
	rF.denomidador = (denominador1 * denominador2);
	
	return rF;
}

Fracao subtracaoRacionais(float numerador1, float denominador1, float numerador2, float denominador2, float numeradorResultado, float denominadorResultado) {
	Fracao rF;
	
	rF.numerador = (numerador1 * denominador2 - numerador2 * denominador1);
	rF.denomidador = (denominador1 * denominador2);
	
	return rF;
}

Fracao multiplicacao(float numerador1, float denominador1, float numerador2, float denominador2, float numeradorResultado, float denominadorResultado) {
	Fracao rF;
	
	rF.numerador = numerador1 * numerador2;	
	rF.denomidador = denominador1 * denominador2;
	
	return rF;
}

Fracao divisao(float numerador1, float denominador1, float numerador2, float denominador2, float numeradorResultado, float denominadorResultado) {
	Fracao rF;
	
	rF.numerador = numerador1 *denominador2; 
	rF.denomidador = numerador2 * denominador1;
	
	return rF;
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
	
	Fracao fA = adicaoRacionais(n1, d1, n2, d2, nR, dR);
	printf("Resultado (adicao): %f/%f\n", fA.numerador, fA.denomidador);
	
	Fracao fS = subtracaoRacionais(n1, d1, n2, d2, nR, dR);
	printf("Resultado (subtracao): %f/%f\n", fS.numerador, fS.denomidador);
	
	Fracao fM = multiplicacao(n1, d1, n2, d2, nR, dR);
	printf("Resultado (multiplicacao): %f/%f\n", fM.numerador, fM.denomidador);
	
	Fracao fD = divisao(n1, d1, n2, d2, nR, dR);
	printf("Resultado (divisao): %f/%f", fD.numerador, fD.denomidador);
	
	return 0;
}
