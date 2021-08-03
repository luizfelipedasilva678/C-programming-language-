#include<stdio.h>
#include<math.h>

double valorAbsoluto(double);

main() {
	int n;
	
	printf("Digite um numero: ");
	scanf("%d", &n);
	
	printf("O valor absoluto de %d e %.0f", n, valorAbsoluto(n));
}

double valorAbsoluto(double n) {
	if(n < 0) 
		return -1 * n;
	else 
		return n;
}
