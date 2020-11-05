/* 5) Apresentar os números primos entre 1 e 100. */
#include <stdio.h>

int main(void)
{
    int i, j;
    int qtde;
    printf("Monstrar os numeros primos entre 1 e 100:\n\n");

    for (i = 1; i < 101; i++) // gerar os primos de 1 a 100.
    {
        qtde = 0;
        for (j = 2; j <= i / 2; j++) // testar o numero para ver se é primo
        {
            if (i % j == 0)
            {
                qtde++;
                break; //ou j = i
            }
        }
        if (qtde == 0)
        {
            printf("%d\t", i);
        }
    }

    return 0;
}
