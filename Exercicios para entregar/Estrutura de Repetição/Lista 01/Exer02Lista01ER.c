/* 2) Elaborar um programa para mostrar, em ordem decrescente, os números divisíveis por 3 
entre 200 e 100. */
#include <stdio.h>

int main(void)
{
    int i;

    printf("Numeros divisiveis por 3 entre 200 e 100:\n\n");

    for (i = 200; i >= 100; i = i - 1)
    {
        if (i % 3 == 0)
        {
            printf("%d\t", i);
        }
    }
    printf("\n\n");
    system("pause");
    return (0);
}
