#include<stdio.h>

typedef enum _Setor {
	verde,  
	amarelo,  
	azul,
	branco
} Setor;

typedef enum _Fileira {
	fileira1 = 1,
	fileira2,
	fileira3,
	fileira4,
	fileira5,
	fileira6,
	fileira7,
	fileira8,
	fileira9,
	fileira10,
} Fileira;

typedef struct _cadeira {
	Setor setor;
	Fileira fileira;
	char coluna;
} Cadeira;


int main(void) {
	Cadeira cadeira;
	
	cadeira.coluna = 'C';
	cadeira.setor =  0;
	cadeira.fileira = 2;
	
	printf("%d", cadeira.fileira);
	return 0;
}
