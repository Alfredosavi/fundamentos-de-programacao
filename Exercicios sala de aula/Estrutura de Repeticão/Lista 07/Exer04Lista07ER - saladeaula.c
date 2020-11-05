/* 4) Escreva um programa que leia o valor de uma aplicação, o percentual de rendimento mensal 
obtido por esta aplicação e o período do investimento; e retorne o valor da aplicação ao final 
do período de investimento.
Obs.: a cada 12 meses o percentual de rendimento deve ser aumentado em 0,25%. */
#include <stdio.h>

int main(void)
{
    float aplicacao;
    float percentualrendimentomensal;
    int periodo;
    char repetir;
    int i;
    do
    {
        do
        {
            printf("Informe o valor da aplicação inicial R$: ");
            scanf("%f", &aplicacao);
        } while (aplicacao < 0);

        do
        {
            printf("Informe o percentual de rendimento mensal (ex 0.05 para 5%%): ");
            scanf("%f", &percentualrendimentomensal);
        } while (percentualrendimentomensal < 0);

        do
        {
            printf("Informe o periodo em meses: ");
            scanf("%d", &periodo);
        } while (periodo < 0);

        for (i = 1; i <= periodo; i++)
        {
            aplicacao = aplicacao + (aplicacao * percentualrendimentomensal);

            if (i % 12 == 0)
            {
                percentualrendimentomensal = percentualrendimentomensal + 0.025;
            }
        }

        printf("Aplicação final R$ %.2f", aplicacao);

        printf("\nExecutar novamente (S/s para sim):");
        fflush(stdin);
        scanf("%c", &repetir);
    } while (repetir == 'S' || repetir == 's');

    return 0;
}
