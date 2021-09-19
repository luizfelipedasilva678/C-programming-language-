#include<stdio.h>
#include<stdlib.h>

int qtdMaiores(int **, int, int);

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
	
	printf("Quantidade de numeros maior que a media: %d", qtdMaiores(matriz, linhas, colunas));
			
	for(i = 0; i < linhas; i++)
		free(matriz[i]);
	free(matriz);
}

int qtdMaiores(int **m, int linhas, int colunas) {
	int qtd = 0, i, j;
	float md;
	
	md = calculaMediaAritmetica(m, linhas, colunas);
	
	for(i = 0; i < linhas; i++) {
		for(j = 0; j < colunas; j++) {
			if(m[i][j] > md) {
				qtd++;
			}
		}
	}
	
	return qtd;
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



