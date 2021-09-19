#include<stdio.h>
#include<stdlib.h>

float calculaMediaAritmetica(int **, int, int);

int main() {
	int colunas, linhas, i, j;
	int ** matriz;
	
	printf("Digite quantas colunas: ");
	scanf("%d", &colunas);
	
	printf("Digite quantas linhas: ");
	scanf("%d", &linhas);
	
	matriz = (int **)malloc(sizeof(int*[linhas]));
	for(i = 0; i < linhas; i++)
		matriz[i] = (int *)malloc(sizeof(int[colunas]));
	
	for(i = 0; i < linhas; i++) {
		for(j = 0; j < colunas; j++) {
			printf("Digite o valor para a posicao [%d][%d]: ", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}
	
	printf("A media dos valores e %.1f: ", calculaMediaAritmetica(matriz, linhas, colunas));	
	
	for(i = 0; i < linhas; i++)
		free(matriz[i]);
	free(matriz);
}

float calculaMediaAritmetica(int **m, int linhas, int colunas) {
	int i =  0, j  = 0;
	float avg = 0;
	
	for(i = 0; i < linhas; i++) {
		for(j = 0; j < colunas; j++) {
			avg += m[i][j]; 
		}
	}
	
	return avg / (linhas * colunas);
}
