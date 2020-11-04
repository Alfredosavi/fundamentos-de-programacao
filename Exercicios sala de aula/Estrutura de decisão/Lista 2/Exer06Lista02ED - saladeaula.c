/* 6) Um hotel cobra R$ 80,00 por diária mais uma taxa de serviços de acordo com:
	R$ 5,50 por diária, se o número de diárias for maior que 15;
	R$ 6,00 por diária, se o número de diárias for igual a 15;
	R$ 8,00 por diária, se o número de diárias for menor que 15.
	Fazer um programa para determinar o valor a ser pago pelo cliente. Se informado zero 
    ou valor negativo para a quantidade de diárias não realizar o cálculo. */
#include <stdio.h>

int main(void)
{
    int diaria;
    int valorfixo;
    float valortaxa;
    float resultado;

    printf("Informe o numero de diarias: ");
    scanf("%d", &diaria);

    if (diaria <= 0)
    {
        printf("Numero de diaria foi negativa ou nula.\n");
    }
    else if (diaria > 15)
    {
        valorfixo = diaria * 80;
        valortaxa = 5.50 * diaria;
        resultado = valorfixo + valortaxa;
        printf("O valor total é de R$: %.2f\n", resultado);
    }
    else if (diaria == 15)
    {
        valorfixo = diaria * 80;
        valortaxa = 6 * diaria;
        resultado = valorfixo + valortaxa;
        printf("O valor total é de R$: %.2f\n", resultado);
    }
    else
    {
        valorfixo = diaria * 80;
        valortaxa = 8 * diaria;
        resultado = valorfixo + valortaxa;
        printf("O valor total é de R$: %.2f\n", resultado);
    }

    system("pause");
    return (0);
}
