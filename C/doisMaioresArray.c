#include<stdio.h>

void inicializa(int *nums, int T)
{
    int i = 0;

    while (i < T)
    {
        nums[i] = 0;

        i++;
    }
}

void ordena(int *nums, int T)
{
    int aux = 0, i = 0, j = 0;

    for (i = 0; i < 10; i++)
    {
        for (j = i+1 ; j < 10; j++)
        {
            if(nums[i] > nums[j])
            {
                aux = nums[i];
                nums[i] = nums[j];
                nums[j] = aux;
            }
        }
    }
}

int main(void)
{
    int i = 0, nums[10];

    inicializa(nums, 10);

    while(i < 10)
    {
        printf("Digite um numero: ");
        scanf("%d", &nums[i]);

        i++;
    }

    ordena(nums, 10);

    printf("\n");
    printf("O maior numero que voce digitou foi: %d \n", nums[9]);
    printf("O segundo maior numero que voce digitou foi: %d", nums[8]);
    printf("\n");

    return 0;
}
