#include<stdio.h>

typedef struct _Posicao_ {
	char coluna;
	int linha;
} Posicao;

int main(void) {
	Posicao posicao;
	
	posicao.coluna = 'H';
	posicao.linha = 8;
	
	printf("%d", posicao.linha);
	printf("%c", posicao.coluna);
	
	return 0;
}
