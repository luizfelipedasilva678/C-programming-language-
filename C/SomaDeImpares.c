#include<stdio.h>

int main(void)
{
    int soma = 0;

    for(int i = 1; i <= 15; i++)
    {
        if(i % 2 != 0)
        {
            soma += i;
        }
    }

    printf("Resultado: %d", soma);

    return 0;
}
