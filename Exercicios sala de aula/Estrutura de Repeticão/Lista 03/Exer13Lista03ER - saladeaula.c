/* 13) Apresentar os múltiplos de 10 entre 1000 e 0 (ordem decrescente).
Mostrar os valores separados por uma marca de tabulação e em colunas com 8 n�meros por linha. */
#include <stdio.h>

int main(void)
{
    int i;
    int quantidade = 0;

    printf("Multiplos de 10 entre 1000 e 0:\n\n");
    for (i = 1000; i >= 0; i = i - 1)
    {
        if (i % 10 == 0)
        {
            printf("%d\t", i);
            quantidade++;
            if (quantidade % 8 == 0)
            {
                printf("\n");
            }
        }
    }
    printf("\n");

    system("pause");
    return (0);
}
