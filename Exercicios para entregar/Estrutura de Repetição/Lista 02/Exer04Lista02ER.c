/* 4) Mostrar os valores ímpares e divisíveis por 7 entre 500 e 0 em ordem decrescente.
Obter a média dos pares e divisíveis por 3 desse intervalo. */
#include <stdio.h>

int main(void)
{
    int i;
    int qtde = 0;
    float media;
    int soma = 0;

    printf("Mostrar os valores impares e divisiveis por 7 entre 500 e 0.\n\n");
    for (i = 500; i > 0; i = i - 1)
    {
        if (i % 3 == 0 && i % 7 == 0)
        {
            printf("%d\t", i);
        }

        if (i % 2 == 0 && i % 3 == 0)
        {
            soma = soma + i;
            qtde++;
        }
    }
    printf("\n");
    media = (float)soma / (float)qtde;
    printf("Media dos pares e divisiveis por 3 do intervalo 500 - 0: %.2f\n", media);
    system("pause");
    return (0);
}
