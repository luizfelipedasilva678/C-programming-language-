#include<stdio.h>
#include<stdlib.h>

char* retornaMesquivalente(int numDoMes) {
	char *mes;
	
	mes = (char*) malloc(sizeof(char));
	
	switch(numDoMes) {
		case 1:
			mes = "janeiro";
			break;
		case 2: 
			mes = "fevereiro";
			break;
		case 3:
			mes = "marco";
			break;
		case 4:
			mes = "abril";
			break;
		case 5:
			mes = "maio";
			break;
		case 6:
			mes = "junho";
			break;
		case 7:
			mes = "julho";
			break;
		case 8:
			mes = "agosto";
			break;
		case 9:
			mes = "setembro";
			break;
		case 10:
			mes = "outubro";
			break;
		case 11:
			mes = "novembro";
			break;
		case 12:
			mes = "dezembro";
			break;
		default :
			mes = "";
			break;	
	}
	
	return mes;	
}

main () {
	int  mes;
	char *nomeMes;
	
	nomeMes =  (char*) malloc(sizeof(char));
		
	printf("Digite o numero do mes (1 a 12): ");
	scanf("%d", &mes);
	
	nomeMes = retornaMesquivalente(mes);
	
	printf("O mes e %s", nomeMes);
	
	free(nomeMes);
}
