#include<stdio.h>

int fatorial(int);

int fibonacci(int);

int main() {
	int x;
	
	printf("Digite um numero: ");
	scanf("%d", &x);
	
	printf("O resultado e: %d", fibonacci(x));
}

int fatorial(int n) {
	if(n == 1) {
		return 1;	
	} else {
		return n * fatorial(n - 1);
	}
}

int fibonacci(int n) {
	if(n == 1 || n == 0) {
		return n;
	} else {
		return fibonacci(n - 1) + fibonacci(n - 2);
	}
}
