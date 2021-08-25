#include<stdio.h>

int fibonacci(int);

main() {
	int x;
	
	printf("Digite um numero: ");
	scanf("%d", &x);
	
	printf("O resultado e: %d", fibonacci(x));
}

int fibonacci(int x) {
	int i = 1, next = 1, prev = 0;
	
	while(i <= x) {
		next = prev + next;
		prev = next - prev;
		
		i++;
	}
	
	return prev;
}
