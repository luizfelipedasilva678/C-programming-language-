#include<stdio.h>
#include<math.h>
#include<stdlib.h>

struct _TPonto_
{
	float x;
	float y;
};

typedef struct _TPonto_ TPonto;

void pi_MonteCarlo (int semente, int dardos, FILE * arquivo);

void transfereDeArquivoParaVetor (FILE * arquivo, TPonto v[], int tamanho);

float distancia (TPonto p);

int dardosNoQuartoDeCirculo (TPonto v[], int tamanho, float raio);

void criaLog (FILE * arquivo, TPonto v[], int pontosNoAlvo, int totalDePontos);

main(){
	FILE * arquivo;
	TPonto * pontos;
	int totalDeDardos, dardosNoAlvo, semente;
	
	printf("QUANTIDADE DE DARDOS: ");
	scanf("%d", &totalDeDardos);

	pontos = (TPonto *) malloc(sizeof(TPonto[totalDeDardos]));
	
	semente = time(NULL);
	
	pi_MonteCarlo (semente, totalDeDardos, arquivo);
	
	transfereDeArquivoParaVetor (arquivo, pontos, totalDeDardos);
	
	dardosNoAlvo= dardosNoQuartoDeCirculo(pontos, totalDeDardos, 1.0);
	
	criaLog(arquivo, pontos, dardosNoAlvo, totalDeDardos);
	
	free(pontos);
}


void pi_MonteCarlo (int semente, int dardos, FILE * arquivo) {
	TPonto p;
	int i;
	

	arquivo = fopen("pontos.dat", "wb+");
	
	
	srand(semente);
	
	for(i=0; i < dardos; i++) {
	
		p.x = 1.0 * rand() / RAND_MAX;
		p.y = 1.0 * rand() / RAND_MAX;
	
		fwrite(&p, sizeof(TPonto), 1, arquivo);
	}
	

	fclose(arquivo);
}

void transfereDeArquivoParaVetor (FILE * arquivo, TPonto v[], int tamanho) {
	int i;
	TPonto ponto;
	
	arquivo = fopen("pontos.dat", "rb");
	rewind(arquivo);
		
	for(i = 0; i < tamanho; i++) {
		fread(&ponto, sizeof(TPonto), 1, arquivo);
		v[i].x = ponto.x;
		v[i].y = ponto.y;
	}
			
	fclose(arquivo);
}

float distancia (TPonto p) {
	return sqrt( ( pow(p.x, 2) + pow(p.y, 2) ) );
}

int dardosNoQuartoDeCirculo (TPonto v[], int tamanho, float raio) {
	int qtdDardosNoQuarto = 0, i;
	float resultDistancia;
	
	for(i = 0; i < tamanho; i++) {
		resultDistancia = distancia(v[i]);
		
		if(resultDistancia <= 1) {
			qtdDardosNoQuarto++;
		} 
	}
	
	return qtdDardosNoQuarto;
}

void criaLog (FILE * arquivo, TPonto v[], int pontosNoAlvo, int totalDePontos) {
	int i;
	
	float valorAproxPI = ( ((float) pontosNoAlvo) / ((float) totalDePontos) ) * 4;
	
	arquivo = fopen("logMontecarlo.txt", "w+");
	
	fprintf(arquivo, "Pontos obtidos \n\n");
	
	for(i = 0; i < totalDePontos; i++) {
		fprintf(arquivo, "(%f, %f) \n", v[i].x, v[i].y);
	}	
	
	fprintf(arquivo, "\n");
	fprintf(arquivo, "Total de dardos arremessados ---> %d \n", totalDePontos);
	fprintf(arquivo, "Total de dardos no quarto de círculo ---> %d \n", pontosNoAlvo);
	fprintf(arquivo, "Valor aproximado de PI ---> %f \n", valorAproxPI);
	
	fclose(arquivo);
}


