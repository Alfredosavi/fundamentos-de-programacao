/* 1) Elaborar um programa para mostrar os números pares entre 20 e 100. Fazer a média dos 
valores desse intervalo que são divisíveis por 5. */
#include <stdio.h>

int main(void)
{
    int i;
    int qtde = 0;
    int somatodos = 0;
    float media;

    printf("Numeros pares entre 20 a 100:\n\n");
    for (i = 20; i <= 100; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\t", i);
        }

        if (i % 5 == 0)
        {
            qtde++;
            somatodos = somatodos + i;
        }
    }
    printf("\n\n");
    media = (float)somatodos / (float)qtde;
    printf("Media dos valores do intervalo 20 a 100 que sao divisiveis por 5 e de %.2f\n", media);

    system("pause");
    return (0);
}
