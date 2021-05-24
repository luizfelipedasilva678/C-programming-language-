#include<stdio.h>

int potencia(int x, int y)
{
    int aux = 1;
    int cont = 1;

    while (cont <= y)
    {
        aux *= x;

        cont++;
    }

    return aux;
}

int main(void)
{
    int x, y, result;

    printf("Digite a base da potencia: ");
    scanf("%d", &x);
    printf("Digite o expoente da potencia: ");
    scanf("%d", &y);
    printf("\n");

    result = potencia(x,y);

    printf("O resultado e: %d", result);

    return 0;
}
