#include<stdio.h>

int main(void)
{
    int i = 0, maior = 0, aux = 0;

    while(i < 10)
    {
        printf("Digite um numero: ");
        scanf("%d", &aux);

        if(aux > maior)
        {
            maior = aux;
        }

        i++;
    }

    printf("O maior numero que voce digitou foi: %d", maior);

    return 0;
}
