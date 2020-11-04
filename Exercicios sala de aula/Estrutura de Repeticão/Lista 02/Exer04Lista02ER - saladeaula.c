/* 4) Apresentar os números divisíveis por 4 ou múltiplos de 10 entre 500 e 0
 e a média desses múltiplos. */
#include <stdio.h>

int main(void)
{
    int i;
    int media;
    int quantidade = 0;
    int soma = 0;

    printf("Numeros divisiveis por 4 ou multiplos de 10:\n\n");
    for (i = 500; i >= 0; i = i - 1)
    {
        if (i % 4 == 0 || i % 10 == 0)
        {
            printf("%d\t", i);
        }

        soma = soma + i;
        quantidade++;
    }
    media = soma / quantidade;
    printf("\n\nMedia dos valores do intervalo: %d\n\n", media);

    system("pause");
    return (0);
}
