#include<stdio.h>
#include<conio.h>


int eVogal(char);

int eMinuscula(char);

int eMaiuscula(char);

int eLetra(char);

int eConsoante(char);

int eNumero(char);

main () {
	char n;
	int result;
	
	printf("Digite uma letra: ");
	scanf("%c", &n);
	
	if(eLetra(n) == 1) {
		if(eMinuscula(n) == 1) {
			printf("E uma letra minuscula\n");
		} else if(eMaiuscula(n) == 1) {
			printf("E uma letra maiuscula\n");
		}
		
		if(eConsoante(n) == 1) {
			printf("E uma consoante");
		} else if(eVogal(n) == 1) {
			printf("E uma vogal");
		}
	} else if(eNumero(n) == 1) {
		printf("E um numero");
	}
	
	
	
	getch();
}


int eVogal(char n) {
	return (n == 'a'  || n == 'e' || n == 'i' || n == 'o' || n == 'u' || n == 'A' || n == 'E' || n == 'I' || n == 'O' || n == 'U') ?  1 :  0;
}

int eMinuscula(char n) {
	return (n >= 97 && n <= 122) ? 1 : 0;
}

int eMaiuscula(char n) {
	return (n >= 65 && n <= 90) ? 1 : 0;
}

int eLetra(char n) {
	return (n >= 65 && n <= 90 || n >= 97 && n <= 122) ? 1 : 0;
}

int eConsoante(char n) {
	return (n != 'a' && n != 'e' && n != 'i' && n != 'o' && n != 'u' && n != 'A' && n != 'E' && n != 'I' && n != 'O' && n != 'U') ? 1 : 0;
}

int eNumero(char n) {
	return (n >= 48 && n <= 57) ? 1 : 0;
}


