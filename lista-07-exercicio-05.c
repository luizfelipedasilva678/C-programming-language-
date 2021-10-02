#include<stdio.h>

typedef struct _Fracao {
	int denominador;
	int numerador;
} Fracao;

int main(void) {
	Fracao fracao;
	
	fracao.denominador = 10;
	fracao.numerador = 20;
	
	printf("%d", fracao.denominador);	
	
	return 0;
}
