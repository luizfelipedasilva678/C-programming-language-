#include<stdio.h>

void tabelaAscii() {
	int i = 0;
	
	while (i <= 256) {
		printf("%c = %d \n", i, i);
		i++;
	}
}

int main(void) {
	tabelaAscii();
	
	return 0;
}
