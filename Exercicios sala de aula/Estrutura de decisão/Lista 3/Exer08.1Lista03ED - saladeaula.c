/* 8.1) A Figura a seguir apresenta um exemplo fictício de árvore de decisão, tomando
atributos de clientes de alguma instituição financeira. Elabore o algoritmo que
implemente essa árvore de decisão. As entradas podem ser do tipo char, portanto,
considere a primeira letra de cada palavra como entrada. */
#include <stdio.h>

int main(void)
{
    char resp;

    printf("Informe a situação do seu saldo em conta corrente (Positivo/Negativo): ");
    scanf("%c", &resp);

    if (resp == 'P' || resp == 'p')
    {
        printf("Cliente sem risco\n");
    }

    else if (resp == 'N' || resp == 'n')
    {
        fflush(stdin);
        printf("Aplicacoes ? ");
        scanf("%c", &resp);

        if (resp == 's' || resp == 'S' || resp == 'y' || resp == 'Y')
        {
            printf("Cliente sem risco !!!\n");
        }

        else
        {
            printf("Cliente com risco !!!\n");
        }
    }
    else
    {
        printf("Resposta invalida ...\n");
    }

    system("pause");
    return (0);
}
