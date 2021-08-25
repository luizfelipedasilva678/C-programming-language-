#include<stdio.h>

float potencia(float, float);

main () {
	float x,y;
	
	printf("Digite um numero: ");
	scanf("%f", &x);
	
	printf("Digite o expoente: ");
	scanf("%f", &y);
	
	printf("O resultado da potencia e: %f", potencia(x,y));
}

float potencia(float x, float y) {
	float aux = 1;
	int i = 1;
	
	while(i <= y) {
		aux *= x;
		
		++i;	
	}
	
	return aux;
}
