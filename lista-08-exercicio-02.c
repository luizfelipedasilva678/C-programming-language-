#include<stdio.h>
#include<stdlib.h>

int main(void) {
	struct TASCII
	{
	   int codigo;
	   char caractere;
	} ascii;
  
	FILE * arquivo, * arquivoCpy;
	char c, nomeArquivo[80], nomeArquivoCpy[80];
	int i;
	char opcao;
  
	printf("Informe o nome (com caminho) do arquivo a ser usado: ");
	gets(nomeArquivo);
	arquivo = fopen(nomeArquivo, "r");
	
	printf("Informe o nome (com caminho) do arquivo a ser copiado: ");
	gets(nomeArquivoCpy);
	arquivoCpy = fopen(nomeArquivoCpy, "wb+");
    rewind(arquivo);

  	while(1) {
		fread(&ascii, sizeof(struct TASCII), 1, arquivo);
		if (feof(arquivo)) break;
		fwrite(&ascii, sizeof(struct TASCII), 1, arquivoCpy);
	}
	
	fclose(arquivo);
	fclose(arquivoCpy);
	
	return 0;
}
