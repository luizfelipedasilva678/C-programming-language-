#include<stdio.h>

int main(void)
{
    int n1, n2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);
    printf("\n");


    if(n1 == n2)
    {
        printf("Sao iguais");
    }

    if(n1 > n2)
    {
        printf("Numero 1 e maior que numero 2");
    }

    if(n2 > n1)
    {
        printf("Numero 2 e maior que numero 1");
    }
    
    return 0;
}
