/* 3) Apresentar os números primos entre dois valores, que representam os limites de um 
intervalo, informados pelo usuário.
Apresentá-los com n números por linha. n é informado pelo usuário. Validar as entradas 
para que seja um valor positivo. */
#include <stdio.h>
int main(void)
{
    char repetir;
    int maior, menor;
    int coluna;
    int qtde;
    int i, j;

    do
    {
        do
        {
            printf("Informe um valor que representa o limite inferior do intervalo: ");
            scanf("%d", &menor);
        } while (menor < 0);
        do
        {
            printf("Informe um valor que representa o limite superior do intervalo: ");
            scanf("%d", &maior);
        } while (maior < 0);
        do
        {
            printf("Informe um valor que representa a quantidade de colunas: ");
            scanf("%d", &coluna);
        } while (coluna <= 0);
        if (maior > menor)
        {
            maior = maior;
            menor = menor;
        }
        else
        {
            i = maior;
            maior = menor;
            menor = i;
        }
        for (i = menor; i <= maior; i++)
        {
            qtde = 0;
            for (j = 2; j <= i / 2; j++)
            {
                if (i % j == 0)
                {
                    qtde++;
                    break;
                }
            }
            if (qtde == 0)
            {
                printf("%d\t", i);
            }
        }
        printf("\n\n");
        printf("Deseja repetir o programa ??? (S/s para sim): ");
        fflush(stdin);
        scanf("%c", &repetir);
    } while (repetir == 's' || repetir == 'S');
}
