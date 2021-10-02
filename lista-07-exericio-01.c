#include<stdio.h>

typedef enum _sexo_ {
	masculino,
	feminino
} sexo;

typedef enum _estadoCivil_ {
	solteiro, 
	casado, 
	viuvo, 
	separado,
	desquitado 
} estadoCivil;

int main(void) {
	estadoCivil estadoCivilValue;
	sexo sexoValue;
	
	printf("Digite seu estado civil: ");
	scanf("%d", &estadoCivilValue);
	
	
	printf("Digite seu sexo: ");
	scanf("%d", &sexoValue);
	
	printf("Seu estado civil e %d, seu sexo e %d", estadoCivilValue, sexoValue);
	
	return 0;
}
