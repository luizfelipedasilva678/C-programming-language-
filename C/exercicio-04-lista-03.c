#include<stdio.h>

int maiorDeDoisNumeros(int, int);

int maiorDeTresNumeros(int, int, int);

main() {
	int a, b, c;
	
	printf("Digite 3 numeros: ");
	scanf("%d%d%d", &a, &b, &c);
	
	printf("O maior entre %d e %d e o %d\n", a, b, maiorDeDoisNumeros(a,b));
	
	printf("O maior entre %d, %d e %d  e o %d\n", a, b, c, maiorDeTresNumeros(a,b,c));
}

int maiorDeDoisNumeros(int a, int b) {
	if(a > b) 
		return a;
	else 
		return b;
}

int maiorDeTresNumeros(int a, int b, int c) {
	if (maiorDeDoisNumeros(a, b) > c) return maiorDeDoisNumeros(a, b); else return c;
}
