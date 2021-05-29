#include<stdio.h>

int main(void)
{
    int numDeValoresASeremLidos;
    int i;
    int menor;
    int num;

    printf("Digite a quantidade de numeros que voce vai digitar: ");
    scanf("%d", &numDeValoresASeremLidos);

    printf("Digite um numero: ");
    scanf("%d", &num);

    menor = num;

    for(i = 0; i < (numDeValoresASeremLidos - 1); i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &num);

        if(num < menor) {
            menor = num;
        }
    }

    printf("O menor numero que voce digitou foi: %d", menor);

    return 0;
}

