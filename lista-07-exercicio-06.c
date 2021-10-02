#include<stdio.h>
#include<stdlib.h>

typedef struct _Telefone {
	enum _tipo {
		residencial,
		comercial,
		movel	
	} tipo;
	
	int numero;
	int ddd;
} Telefone;

typedef struct _Lista {
	char * nome;
	Telefone telefone;
} Lista;

int main( void ) {
	Lista lista;
	
	lista.telefone.ddd = 22;
	lista.telefone.numero = 22222222;
	lista.telefone.tipo = 0;
	lista.nome = (char *)malloc(sizeof(char));
	lista.nome = "Teste";
	
	
	printf("%s, %d, %d", lista.nome, lista.telefone.numero, lista.telefone.tipo);
	
	free(lista.nome);
	
	return 0;
}
