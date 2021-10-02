#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

typedef struct _pontoMedio {
  float xM;
  float yM;
} PontoMedio;

PontoMedio pontoMedio(float, float, float, float, float , float);

int main(void) {
	float x1, y1, x2, y2, xM, yM;
	PontoMedio pM;
	
	printf("Digite o primeiro ponto: ");
	scanf("%f%f", &x1, &y1);
	
	printf("Digite o segundo ponto: ");
	scanf("%f%f", &x2, &y2);
	
	pM = pontoMedio(x1, y1, x2, y2, xM, yM);
	
	printf("O ponto medio e (%.2f,%.2f)", pM.xM, pM.yM);
	
	getch();
	return 0;
}

PontoMedio pontoMedio(float x1, float y1, float x2, float y2, float xM,  float yM) {	
	PontoMedio pM;
	
	pM.xM = (x1 + x2) / 2;
	pM.yM = (y1 + y2) / 2;
	
	return pM;
}
