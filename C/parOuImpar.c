#include<stdio.h>

int main(void)
{
    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    if(n % 2 == 0)
    {
        printf("Par");
    }

    if(n % 2 != 0)
    {
        printf("Impar");
    }
    
    return 0;
}
