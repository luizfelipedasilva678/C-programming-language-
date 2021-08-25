#include<stdio.h>

int fatorial(int);

main() {
	int x;
	
	printf("Digite um numero: ");
	scanf("%d", &x);
	
	printf("O fatorial desse numero e: %d", fatorial(x));
}

int fatorial(int x) {
	int aux = 1, i = x;
	
	while(i != 1) {
		aux *= i;
			
		i--;
	}
	
	return aux;
}


