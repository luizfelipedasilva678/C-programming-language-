#include<stdio.h>
#include<stdlib.h>

void exibeQtdNotas(int n) {
	int restante = 0, qtd500 = 0, qtd100 = 0, qtd50 = 0, qtd10 = 0, qtd5 = 0, qtd1 = 0;
	
	if(n % 500 == 0) {
		qtd500 = (n / 500);
	} else {
		qtd500 = (n / 500);
		restante = (n % 500);
		
		if(restante % 100 == 0) {
			qtd100 = (restante / 100);
		} else {
			qtd100 = (restante / 100);
			restante = (restante % 100);
			
			if(restante % 50 == 0) {
				qtd50 = (restante / 50);
			} else {
				qtd50 = (restante / 50);
				restante = (restante % 50);
				
				if(restante % 10 == 0) {
					qtd10 = (restante / 10);
				} else {
					qtd10 = (restante / 10);
					restante = (restante % 10);
					
					if(restante % 5 == 0) {
						qtd5 = (restante / 5);
					} else {
						qtd5 = (restante / 5);
						restante = (restante % 5);
						
						if(restante % 1 == 0) {
							qtd1 = (restante / 1);
						} else {
							qtd1 = (restante / 1);
							restante = (restante % 1);
						}
					}
				}
			}
		}
						
	}
	
	if(qtd500 > 0) {
		printf("%d cedula(s) de X$ 500\n", qtd500);
	}
	
	if(qtd100 > 0) {
		printf("%d cedula(s) de X$ 100\n", qtd100);
	}
	
	if(qtd50 > 0) {
		printf("%d cedula(s) de X$ 50\n", qtd50);
	}
	
	if(qtd10 > 0) {
		printf("%d cedula(s) de X$ 10\n", qtd10);
	}
	
	if(qtd5 > 0) {
		printf("%d cedula(s) de X$ 5\n", qtd5);
	}
	
	if(qtd1 > 0) {
		printf("%d cedula(s) de X$ 1\n", qtd1);
	}
}

main () {
	int nota;
	
	printf("Digite um valor: ");
	scanf("%d", &nota);
	
	exibeQtdNotas(nota);
}
