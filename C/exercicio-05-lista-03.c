#include<stdio.h>

int eTriangulo (float, float, float);

int tipoTriangulo(float, float, float);

main () {
	float a, b, c;
	int result;
	
	printf("Digite o valor de a: ");
	scanf("%f", &a);
	
	printf("Digite o valor de b: ");
	scanf("%f", &b);
	
	printf("Digite o valor de c: ");
	scanf("%f", &c);
	
	result = tipoTriangulo(a, b, c);
	
	if(result == 3) {
		printf("Trangulo equilatero \n");
	} else if(result == 2) {
		printf("Trangulo isosceles \n");
	} else if(result == 1) {
		printf("Trangulo escaleno \n");
	} else {
		printf("Nao e triangulo \n");
	}
}

int eTriangulo  (float a, float b, float c) {
	if(a < (b+c) && b < (a+c) && c < (a+b)) {
		return 1;
	} else {
		return 0;
	}
}

int tipoTriangulo (float a, float b, float c) {
	if(eTriangulo(a, b, c) == 1) {
		if(a == b && a == c && c == b) {
			return 3;
		} else if((a != b && a == c && c == b) ||  (a == b && a != c && c == b) ||  (a == b && a == c && c != b) ) {
			return 2;
		} else {
			return 1;
		}
	} else {
		return 0;
	}
}
