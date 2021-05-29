#include<stdio.h>

int main(void)
{
    int soma = 0;

    for(int i = 2; i <= 10; i+=2)
    {
        soma += i;
    }

    printf("Resultado: %d", soma);

    return 0;
}
