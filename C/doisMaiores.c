#include<stdio.h>

int main(void)
{
    int i = 0, maior = 0, aux = 0, segundoMaior = 0;

    while(i < 10)
    {
        printf("Digite um numero: ");
        scanf("%d", &aux);

        if(maior < aux) {
            segundoMaior = maior;
            maior = aux;
        }

        i++;
    }

    printf("\n");
    printf("O maior numero que voce digitou foi: %d \n", maior);
    printf("O segundo maior numero que voce digitou foi: %d", segundoMaior);
    printf("\n");

    return 0;
}
