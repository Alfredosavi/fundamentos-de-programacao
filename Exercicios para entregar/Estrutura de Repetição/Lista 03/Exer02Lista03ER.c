/* 2) Uma empresa deseja calcular a depreciação de seus bens. Para tanto, desenvolver um
programa que obtenha a taxa de depreciação anual para os bens, o valor do bem a ser
depreciado e o período em anos.
Valor depreciado = valor do bem * (taxa de depreciação / 100);
Valor do bem depreciado = valor do bem é valor depreciado; */
#include <stdio.h>

int main(void)
{
    float valordobem;
    float taxadedepreciacao;
    int periodoano;
    char repetir;
    float valordepreciado;
    float valordobemdepreciado;
    float soma;
    int i;
    do
    {
        system("cls");
        soma = 0;
        printf("Informe o valor do bem a ser depreciado... R$: ");
        scanf("%f", &valordobem);
        printf("Informe o periodo da depreciacao (em anos): ");
        scanf("%d", &periodoano);
        printf("Informe a taxa de depreciacao anual (em %%): ");
        scanf("%f", &taxadedepreciacao);

        printf(" Ano    Valor do Bem      Depreciacao     Valor Depreciado\n");
        printf("==========================================================\n");
        for (i = 1; i <= periodoano; i++)
        {
            printf(" %2d", i);
            valordepreciado = valordobem * (taxadedepreciacao / 100);
            valordobemdepreciado = valordobem - valordepreciado;
            printf("    %10.2f       %10.2f       %10.2f\n", valordobem, valordobemdepreciado, valordepreciado);
            soma = soma + valordobemdepreciado;
            valordobem = valordepreciado;
        }
        printf("==========================================================\n");
        printf("Depreciacao acumulada = R$ %.2f\n", soma);
        printf("\n");
        printf("Deseja repetir o programa??? (s/S para sim): ");
        fflush(stdin);
        scanf("%c", &repetir);
    } while (repetir == 'S' || repetir == 's');
}
