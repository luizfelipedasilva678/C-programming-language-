#include<stdio.h>
#include<stdlib.h>

void multiplicaPorIndiceSemPonteiro(int *, int);

void multiplicaPorIndiceComPonteiros(int *, int);

int main() {
	int *vetor, colunas = 5, contador;
		
	vetor = (int *)malloc(sizeof(int[colunas]));
	
	int vetor2[colunas];
	
	vetor2[0] = 1;
	vetor2[1] = 2;
	vetor2[2] = 3;
	vetor2[3] = 4;
	vetor2[4] = 5;
	
	vetor[0] = 1;
	vetor[1] = 2;
	vetor[2] = 3;
	vetor[3] = 4;
	vetor[4] = 5;
	
	multiplicaPorIndiceSemPonteiro(vetor, colunas);
	multiplicaPorIndiceComPonteiros(vetor2, colunas);
	
	printf("Resultado vetor 1\n");
	for(contador = 0; contador < colunas; contador++) {
		printf("%d\n", vetor[contador]);
	}
	
	printf("Resultado vetor 2\n");
	for(contador = 0; contador < colunas; contador++) {
		printf("%d\n", vetor2[contador]);
	}
	
	free(vetor);
}

void multiplicaPorIndiceSemPonteiro(int v[], int colunas) {
	int contador;
	
	for(contador = 0; contador < colunas; contador++) {
		v[contador] = v[contador] * contador;
	}
}


void multiplicaPorIndiceComPonteiros(int v[], int colunas) {
	int contador;
	
	for(contador = 0; contador < colunas; contador++) {
		v[contador] = v[contador] * contador;
	}
}
