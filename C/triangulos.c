#include<stdio.h>

int main(void)
{
    for(int i = 1; i <= 10; i++)
    {
        printf("\n");
        for(int j = 1; j <= i; j++)
        {
          printf("*");
        }
    }
}
