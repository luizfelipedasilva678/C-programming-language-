#include<stdio.h>

int oposto(int);

int valorAbsoluto(int);

int subtracao(int, int);

int adicao(int, int);

int multiplicacao(int, int);

int divisao(int, int);

int restoDivisao(int, int);

main() {
	int x, y;
	
	printf("Digite um numero: ");
	scanf("%d", &x);
	
		
	printf("Digite um numero: ");
	scanf("%d", &y);	
	
	printf("O resultado e: %d", restoDivisao(x, y));
}

int oposto(int x) {
	int aux = 0, i = x;
	
	if(x < 0) {
		while(i != 0) {
			aux++;
			
			i++;
		}	
	} else {
		while(i != 0) {
			aux--;
			
			i--;
		}
	}
	
	return aux;
}

int valorAbsoluto(int x) {
	int aux = 0, i = x;
	
	if(x < 0) {
		while(i != 0) {
			aux++;
			
			i++;
		}	
		
		return aux;
	} else {
		return x;
	}
}

int subtracao(int x, int y) {
	int aux = x, i = 0;
	
	while(i < y) {
		aux--;
		
		i++;
	}
		
	return aux;
}

int adicao(int x, int y) {
	int aux = x, i = 0;
	
	while(i < y) {
		aux++;
		
		i++;
	}
		
	return aux;
}

int multiplicacao(int x, int y) {
	int aux = 0, i, j;
	
	for(i = 0; i < y; i++) {
		for(j = 0; j < x; j++) {
			aux++;
		}
	}
		
	return aux;
}

int divisao(int x, int y) {
	int aux = 0, i, j;
	
	while(y <= x) {
		aux++;
		
		x -= y;
	}
		
	return aux;
}

int restoDivisao(int x, int y) {
	return x - (divisao(x, y) * y); 
}
