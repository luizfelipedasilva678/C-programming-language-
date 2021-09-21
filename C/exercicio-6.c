#include<stdio.h>
#include<stdlib.h>

void ordena(int *, int);

void ordenaMatriz(int **, int, int );

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
	
	ordenaMatriz(matriz, linhas, colunas);
	      	
	printf("Matriz ordenada \n");
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

void ordenaMatriz(int **m, int linhas, int colunas) {
	int i, j, k, Vcolunas = linhas * colunas;
	int v[Vcolunas];
	
	for(i = 0; i < linhas; i++) {
		for(j = 0; j < colunas; j++) {
			k++;
			v[k - 1] = m[i][j];
		} 
	}
	
	ordena(v, Vcolunas);
	
	k = 0;
	for(i = 0; i < linhas; i++) {
		for(j = 0; j < colunas; j++) {
			k++;
			m[i][j] = v[k - 1];
		}
	}	
}

void ordena(int *v, int colunas) {
	int contador, segundoContador, aux;
	
	for(contador = 0; contador < colunas; contador++) {
		for(segundoContador = contador + 1; segundoContador < colunas; segundoContador++) {
			if(v[contador] > v[segundoContador]) {
				aux = v[segundoContador];
				v[segundoContador] = v[contador];
				v[contador] = aux;
			}
		}
	}
}

