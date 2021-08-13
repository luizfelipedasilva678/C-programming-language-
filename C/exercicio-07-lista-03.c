#include<stdio.h>
#include<math.h>

int eLetra(char);

int posicaoAlfabeto(char);

int eMinuscula(char);

int eMaiuscula(char);

main() {
	char c;
	int result;
	
	printf("Digite um caracter: ");
	c = getchar();
	
	result = posicaoAlfabeto(c);
	printf("A posicao dessa letra no alfabeto e %d", result);
}

int posicaoAlfabeto(char a) {
	int aux;
	
	if(eLetra(a) == 1) {
		if(eMinuscula(a) == 1) {
			aux = 97;
			return abs((aux - a)) + 1;
		} else if(eMaiuscula(a) == 1) {
			aux = 65;
			return abs((aux - a)) + 1;
		}
	} else {
		return 0;
	}
}

int eLetra(char n) {
	if(n >= 65 && n <= 90 || n >= 97 && n <= 122) {
		return 1;
	}
	
	return 0;
}

int eMinuscula(char n) {
	if(n >= 97 && n <= 122) {
		return 1;
	}
	
	return 0;
}

int eMaiuscula(char n) {
	if(n >= 65 && n <= 90) {
		return 1;
	}
	
	return 0;
}
