#include<stdio.h>


int main(void)
{
    int n, fatorial;

    fatorial = 1;

    printf("Digite o numero: ");
    scanf("%d", &n);

    for(int i = n; i >= 1; i--)
    {
        printf("%d\n", i);
        fatorial *= i;
    }

    printf("Resultado: %d", fatorial);
}
