#include<stdio.h>

float eDivisivel(float, float);

main() {
	float a,b;
	
	printf("Digite dois numeros: ");
	scanf("%f%f", &a, &b);
	
	if(fmod(a,2) == 0 && fmod(b,2) == 0) {
		printf("Os dois numeros sao pares\n");
	} else if( !(fmod(a,2) != 0 && fmod(b,2) != 0) ) {
		if(fmod(a,2) == 0 && fmod(b,2) != 0) {
			printf("O numero %f e par o numero %f nao \n", a, b);
		} else {
			printf("O numero %f nao e par o numero %f e\n", a, b);
		}
	} else {
		printf("Os 2 sao impares\n");
	}
	
	if(eDivisivel(a,b) == 1) {
		printf("O numero %f e divisivel pelo numero %f", a, b);
	} else {
		printf("O numero %f nao e divisivel pelo numero %f", a, b);
	}		
}

float eDivisivel(float n, float m) {
	if(fmod(n,m) == 0) {
		return 1;
	}
	
	return 0;
}
