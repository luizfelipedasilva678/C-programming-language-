#include<stdio.h>

int myFloor(float);

int myCeil(float);

int main() {
	float x;
	
	printf("Digite um numero: ");
	scanf("%f", &x);
	
	printf("O resultado e: %d", myCeil(x));
}

int myFloor(float x) {
	int aux = (int) x;
	return aux;
}

int myCeil(float x) {
	int aux = ((int) x) + 1; 
	return aux;
}


