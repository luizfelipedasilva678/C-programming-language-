#include<stdio.h>

typedef struct _Ponto_ {
	int x;
	int y;
} Ponto;

int main(void) {
	Ponto ponto;
	
	ponto.x = 10;
	ponto.y = 20;
	
	
	printf("%d,%d", ponto.x, ponto.y);
	return 0;
}
