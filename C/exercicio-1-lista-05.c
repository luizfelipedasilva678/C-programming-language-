#include<stdio.h>
#include<stdlib.h>

void inverteArranjoComPonteiro(int *, int);

void inverteArranjoSemPonteiro(int *, int);
 
int main() {
	int colunas, *vetor, contador;
	
	printf("Digite o numero de colunas do seu arranjo: ");
	scanf("%d", &colunas);
	
	vetor = (int *) malloc(sizeof(int[colunas]));
	int vetor2[colunas];
	
	for(contador = 0; contador < colunas; contador++) {
		printf("Digite o numero para o indice %d do seu arranjo: ", contador);
		scanf("%d", &vetor[contador]);
	}
	
	for(contador = 0; contador < colunas; contador++) {
		printf("Digite o numero para o indice %d do seu arranjo2: ", contador);
		scanf("%d", &vetor2[contador]);
	}
		
	inverteArranjoComPonteiro(vetor, colunas);
	inverteArranjoSemPonteiro(vetor2, colunas);
	
	printf("Arranjo invertido vetor 1\n");	
	for(contador = 0; contador < colunas; contador++) {
		printf("%d \n", vetor[contador]);
	}
	
		
	printf("Arranjo invertido vetor 2\n");	
	for(contador = 0; contador < colunas; contador++) {
		printf("%d \n", vetor2[contador]);
	}
	
	free(vetor);
}

void inverteArranjoComPonteiro(int vetor[], int colunas) {
	int coluna, vetorAuxiliar[colunas], contador, aux = 0;
	
	for(contador = colunas - 1; contador >= 0; contador--) {
		vetorAuxiliar[aux++] = vetor[contador];
	}	
	
	for(contador = 0; contador < colunas; contador++) {
		vetor[contador] = vetorAuxiliar[contador];
	}
}

void inverteArranjoSemPonteiro(int vetor[], int colunas) {
	int coluna, vetorAuxiliar[colunas], contador, aux = 0;
	
	for(contador = colunas - 1; contador >= 0; contador--) {
		vetorAuxiliar[aux++] = vetor[contador];
	}	
	
	for(contador = 0; contador < colunas; contador++) {
		vetor[contador] = vetorAuxiliar[contador];
	}
}
 


