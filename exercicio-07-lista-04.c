#include<stdio.h>
#include<math.h>

float raizQuadradaAproximada(int);

int main ( void ) {
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    printf("A raiz quadrada aproximada de %d e : %f", n, raizQuadradaAproximada(n));

    return 0;
}

float raizQuadradaAproximada(int n) {
    float a = 0, b = n;
    float c, c2;

    do{
        c = (a + b) / 2;
        c2 = pow(c, 2);

        if( c2 > n ) {
            b = c;
        } else {
            a = c;
        }

    }while(( b - a ) > 0.000001);

    return c;
}
