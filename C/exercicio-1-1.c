/*-----------------
 Exercício - 1.1
------------------*/
#include <stdio.h>
#include <stdlib.h>
void exibeTextoNaTela(char*);
main ()
{
 char *texto;
 texto = (char*)malloc(sizeof(char));
 printf("Digite um texto: ");
 gets(texto);
 exibeTextoNaTela(texto);
 free(texto);
}
void exibeTextoNaTela(char *texto)
{
 printf("%s", texto);
}
