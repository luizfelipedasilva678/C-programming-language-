#include <stdio.h>
#include <stdlib.h>
void exibeDadosFuncionario(char *, int, int, int, float, char);
main ()
{
 char *nome;
 int dia, mes, ano;
 float salario;
 char chefe;
 nome = (char*)malloc(sizeof(nome));
 printf("Digite seu nome: ");
 gets(nome);
 printf("Digite o dia do seu nascimento: ");
 scanf("%d", &dia);
 printf("Digite o mes do seu nascimento: ");
 scanf("%d", &mes);
 printf("Digite o ano do seu nascimento: ");
 scanf("%d", &ano);
 printf("Digite seu salario: "); scanf("%f", &salario);
 scanf("\n");
 printf("Chefe?");
 chefe = getchar();
 exibeDadosFuncionario(nome, dia, mes, ano, salario, chefe);
 free(nome);
}
void exibeDadosFuncionario(char *nome, int dia, int mes, int ano, float salario, char chefe)
{
 printf("%s nasceu no dia %d do mes %d no ano de %d, seu salario e %f. Ele e chefe? %c ",
nome, dia, mes, ano, salario, chefe);
}
