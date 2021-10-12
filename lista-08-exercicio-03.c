#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(void)
{
  const int registros = 256;
  
  struct TASCII
  {
    int codigo;
    char caractere;
  } ascii;
  
  char * str = (char *) malloc(sizeof(char));
  FILE * arquivo;
  char c, nomeArquivo[80];
  int i;
 
  printf("Informe o nome (com caminho) do arquivo a ser usado: ");
  gets(nomeArquivo);
  arquivo = fopen(nomeArquivo, "w+");
  
  for(i = 1; i < registros; i = i+1)
  {
    ascii.codigo = i-1;
    ascii.caractere = (char)(i-1);
    fprintf(arquivo, "%d %c \n", ascii.codigo, ascii.caractere);
  }

  rewind(arquivo);
  while(1) {
    (fscanf(arquivo, "%s", str));
    if(feof(arquivo)) break;
    printf("%s\n" , str);
  }
	 
  fclose(arquivo); 
  free(str);
  return 0;  
}
