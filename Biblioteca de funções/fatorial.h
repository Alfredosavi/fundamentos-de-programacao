#include <stdio.h>

int calculaFatorial(int num)
{
    int fat = 1;
    int i;

    for (i = num; i >= 2; i--)
    {
        fat = fat * i;
    }
    return (fat);
}

//mostrar o processo de calculo: 6x5x4x3x2x1
void mostraFatorial(int num)
{
    int i;
    for (i = num; i >= 2; i--)
    {
        printf("%d * ", i);
    }
    printf("1");
}
