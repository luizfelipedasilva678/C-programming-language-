#include <stdio.h>
#include <conio.h>

int main(void)
{
  struct TASCII
  {
    int codigo;
    char caractere;
  } ascii;
  
  FILE * arquivo;
  char c, nomeArquivo[80];
  int qtd = 0;
  
  printf("Informe o nome (com caminho) do arquivo a ser usado: ");
  gets(nomeArquivo);
  arquivo = fopen(nomeArquivo, "r");
  
  while(1)
  {
    fread(&ascii, sizeof(struct TASCII), 1, arquivo);
    qtd++;
    if (feof(arquivo)) break;
  }
  
  printf("%d" , qtd);
  
  fclose(arquivo);
  getch();
  
  return 0;
}
