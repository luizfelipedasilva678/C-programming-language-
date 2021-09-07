/*---------------------
	Nome: Luiz Felipe da Silva
---------------------*/

#include<stdio.h>

void menorMaior(int*, int*);

int quantidadeDeDivisores(int);

int primo(int);

int menorDivisorPrimo(int);

int mmc(int, int);

int main() {
	int n1, n2;
	
	printf("Manipulacao de inteiros... \n");
	printf("Entre com o 1o numero: ");
	scanf("%d", &n1);
	
	printf("Entre com o 2o numero: ");
	scanf("%d", &n2);
	
	menorMaior(&n1, &n2);
	
	printf("\n");
	printf("\n");
	printf("Saida... \n");
	
	printf("O menor entre %d e %d e: %d \n", n1, n2, n1);
	printf("O maior entre %d e %d e: %d \n", n1, n2, n2);
	printf("Quantidade de divisores de %d e: %d \n", n1, quantidadeDeDivisores(n1));
	printf("Quantidade de divisores de %d e: %d \n", n2, quantidadeDeDivisores(n2));
	
	if(primo(n1) == 1) {
		printf("Primalidade de %d: VERDADEIRA \n", n1);
	} else {
		printf("Primalidade de %d: FALSA \n", n1);
	}
	
	if(primo(n2) == 1) {
		printf("Primalidade de %d: VERDADEIRA \n", n2);
	} else {
		printf("Primalidade de %d: FALSA \n", n2);
	}
	
	printf("Menor divisor primo de %d e: %d \n", n1, menorDivisorPrimo(n1));
	printf("Menor divisor primo de %d e: %d \n", n2, menorDivisorPrimo(n2));
	printf("Menor multiplo comum entre %d e %d e igual a: %d", n2, n1, mmc(n1, n2));
}

void menorMaior(int *n1, int *n2) {
	int aux;
	
	if(*n1 > *n2) {
		aux = *n1;
		*n1 = *n2;
		*n2 = aux;
	} 
}

int quantidadeDeDivisores(int n) {
	int qtdDivisores = 0, i;
	
	for(i = 1; i <= n; i++) {
		if(n % i == 0) {
			qtdDivisores++;
		}
	}
	
	return qtdDivisores;
}

int primo(int n) {
	int qtdDivisores = quantidadeDeDivisores(n);
	
	if(n != 1) {
		if(qtdDivisores == 2) {
			return 1;
		} else {
			return 0;
		}	
	} else {
		return 0;
	}
		
}

int menorDivisorPrimo(int n) {
	int i;
	
	if(n == 1) {
		return n;
	} else {
		for(i = 1; i <= n; i++) {
			if(n % i == 0 && primo(i) == 1) {
				return i;	
			}	
		}	
	}
}

int mmc(int n1, int n2) {
	int resultado = 1,
		A = n1,
		B = n2,
		menorDivisor;
		
	if(A == 1 && B == 1) {
		return resultado;
	} else {
		while(!(A == 1 && B == 1)) {
			if(menorDivisorPrimo(A) < menorDivisorPrimo(B)) {
				if(menorDivisorPrimo(A) != 1) {
					menorDivisor = menorDivisorPrimo(A);
				} else {
					menorDivisor = menorDivisorPrimo(B);
				}			
			} else {
				if(menorDivisorPrimo(B) != 1) {
					menorDivisor = menorDivisorPrimo(B);
				} else {
					menorDivisor = menorDivisorPrimo(A);
				}
			}
				
			if(A % menorDivisor == 0) {
				A = A / menorDivisor;
			}
			
			if(B % menorDivisor == 0) {
				B = B / menorDivisor;
			}
			
			resultado *= menorDivisor;			
		} 
	}
	
	return resultado;	
}
