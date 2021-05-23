#include<stdio.h>

int main(void)
{
    int n;

    int p1;
    int p2;
    int p3;
    int p4;
    int p5;

    printf("Digite um numero de 5 digitos: ");
    scanf("%d", &n);

    p1 = (n % 10);
    p2 = (n/10);
    p3 = (p2/10);
    p4 = (p3/10);
    p5 = (p4/10);

    printf("%d %d %d %d %d", (p5%10), (p4%10), (p3%10), (p2%10), p1);

    return 0;
}
