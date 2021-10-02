#include<stdio.h>
#include<stdlib.h>

typedef enum _local_ {
	rua, 
	avenida,
	largo,
	jardim,
	estrada
} local;

typedef struct _TEndereco_ {
  local localValue;
  char * logradouro;
  int numero;
  char * complemento;
  char * bairro;
  char * cidade;
  char * estado;
  int cep;
} TEndereco;

int main(void) {
	TEndereco *endereco = (TEndereco *)malloc(sizeof(TEndereco));
	
	( * endereco).logradouro = (char *)malloc(sizeof(char));
	( * endereco).complemento = (char *)malloc(sizeof(char));
	( * endereco).bairro = (char *)malloc(sizeof(char));
	( * endereco).cidade = (char *)malloc(sizeof(char));
	( * endereco).estado = (char *)malloc(sizeof(char));
	
	endereco->localValue = 0;
	endereco->logradouro = "rua a";
	endereco->complemento = "sdfsdfsdf";
	endereco->bairro = "jardim";
	endereco->cidade = "Nova friburgo";
	endereco->estado = "RJ";
	endereco->numero = 149;
	endereco->cep = 28633068;
	
	gets(endereco->cidade);
	
	printf("%s", endereco->cidade);
	printf("%d", endereco->numero);
	 
	
	free(( * endereco).logradouro);
	free(( * endereco).complemento);
	free(( * endereco).bairro);
	free(( * endereco).cidade);
	free(( * endereco).estado);
	free(endereco);
	
	return 0;
}
