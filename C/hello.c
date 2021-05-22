
#include<stdio.h>

int main(void)
{
    int n1, n2, result;
    int f1, f2, f3, prod;

    printf("Digite um numero: ");
    scanf("%d", &n1);
    printf("Digite outro numero: ");
    scanf("%d", &n2);

    printf("\n");

    result = n1 + n2;

    if(result >= 6) {
        printf("Aprovado \n");
    }

    printf("Nota: %d\n", result);

    printf("--------------------\n");

    printf("Digite um numero: ");
    scanf("%d", &f1);
    printf("Digite outro numero: ");
    scanf("%d", &f2);
    printf("Digite outro numero: ");
    scanf("%d", &f3);

    printf("\n");

    prod = f1 * f2 * f3;

    printf("Resultado: %d", prod);

    return 0;
}
