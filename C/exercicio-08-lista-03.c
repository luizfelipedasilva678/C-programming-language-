#include<stdio.h>

float calculadora(char, float, float);

main() {
	float n1, n2;
	char op;
	
	printf("Digite 2 numeros: ");
	scanf("%f%f", &n1, &n2);
	
	printf("\n");
	printf("Digite + para somar \nDigite - para subtrair\nDigite X ou x para multiplicar\nDigite / ou : para dividir \n");
	scanf("\n");
	op = getchar();
	printf("\n");
	
	
	printf("O resultado e %.2f", calculadora(op, n1, n2));
}

float calculadora(char operando, float n1, float n2) {
	switch(operando) {
		case '+':
			return n1 + n2;
		case '-':
			return n1 - n2;
		case 'X':
		case 'x':
			return n1 * n2;
		case '/':
		case ':':
			return n1/n2;
	}
}
