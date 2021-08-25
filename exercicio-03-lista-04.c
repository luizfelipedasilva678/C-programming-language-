#include<stdlib.h>

int ePrimo(int);

main () {
	int x;
	
	printf("Digite um numero: ");
	scanf("%d", &x);
	
	if(ePrimo(x) == 2) {
		printf("E primo");
	} else {
		printf("Nao e primo");
	}
}
int ePrimo(int x) {
	int i = 1, aux = 0;
	
	while(i <= x) {
		if(x % i == 0) {
			aux++;
		}
		
		i++;
	}
	
	return aux;
}
