#include<stdio.h>
#include<stdlib.h>

void ordenaLinhaALinha(int **, int, int);

void ordemCrescente(int **, int, int);

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
	
	ordenaLinhaALinha(matriz, linhas, colunas);
		
	for(i = 0; i < linhas; i++) {
		for(j = 0; j < colunas; j++) {
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}	
	
	for(i = 0; i < linhas; i++)
		free(matriz[i]);
	free(matriz);
}

void ordenaLinhaALinha(int **m, int linhas, int colunas) {
	int i, j;
	
	for(i = 0; i < linhas; i++) {
		ordemCrescente(m, i, colunas);
	}
}

void ordemCrescente(int **m, int linha, int colunas) {
	int i = 0, aux, coluna;
	
	for(i; i < colunas; i++) {
		
		for(coluna = i + 1; coluna < colunas; coluna++) {
			
			if(m[linha][i] > m[linha][coluna]) {
				aux = m[linha][coluna];
				m[linha][coluna] = m[linha][i];
				m[linha][i] = aux;
			}
		}
		
	}
}

