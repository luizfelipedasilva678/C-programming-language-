#include<stdio.h>
#include<stdlib.h>

int maiorNumeroSemPonteiro(int *, int);

int maiorNumeroComPonteiros(int *, int);

int main() {
	int *vetor, colunas = 5, contador;
		
	vetor = (int *)malloc(sizeof(int[colunas]));
	
	int vetor2[colunas];
	
	vetor2[0] = 1;
	vetor2[1] = 2;
	vetor2[2] = 100;
	vetor2[3] = 4;
	vetor2[4] = 5;
	
	vetor[0] = 1222;
	vetor[1] = 2;
	vetor[2] = 3;
	vetor[3] = 4;
	vetor[4] = 5;
	
	printf("Resultado vetor 1\n");
	printf("%d\n",  maiorNumeroSemPonteiro(vetor, colunas));

	printf("Resultado vetor 2\n");
	printf("%d\n",  maiorNumeroComPonteiros(vetor2, colunas));

	free(vetor);
}

int maiorNumeroSemPonteiro (int v[], int colunas) {
	int contador = 0, maior = v[0];
	
	for(contador; contador < colunas; contador++) {
		if(v[contador] > maior) {
			maior = v[contador];
		}
	}
	
	return maior;
}

int maiorNumeroComPonteiros (int v[], int colunas) {
	int contador = 0, maior = v[0];
	
	for(contador; contador < colunas; contador++) {
		if(v[contador] > maior) {
			maior = v[contador];
		}
	}
	
	return maior;
}
