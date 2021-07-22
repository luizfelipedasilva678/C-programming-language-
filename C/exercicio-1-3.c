/*-----------
 Luiz Felipe
 Programa criado em 21/07/2021
------------*/
#include <stdio.h>
#include <stdlib.h>
void exibeNomeCompleto(char*, char*);
main ()
{
 char *nome, *sobrenome;
 nome = (char*)malloc(sizeof(char));
 sobrenome = (char*)malloc(sizeof(char));
 printf("Digite seu nome: ");
 gets(nome);
 printf("Digite seu sobrenome: ");
 gets(sobrenome);
 exibeNomeCompleto(nome, sobrenome);
 free(nome);
 free(sobrenome);
}
void exibeNomeCompleto(char *nome, char *sobrenome)
{
 printf("%s, %s", sobrenome, nome);
}

