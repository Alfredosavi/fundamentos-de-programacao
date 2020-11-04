/* 5) Calcular o imposto de renda de uma pessoa de acordo com a seguinte tabela:
	Renda anual	                       Alíquota*	    Dedução**
Até R$ 10000,00	                           0%        	Isento
> R$ 10000,00 e <= R$ 25000,00             10%       	R$ 1000,00
Acima de R$ 25000,00	                   25%	        R$ 4750,00

    **Alíquota é o percentual para realizar o cálculo do imposto a ser pago.
	**Dedução é o valor deduzido do valor já calculado para ser pago.
	Se informado valor negativo não realizar o cálculo e informar o usuário.  */
#include <stdio.h>

int main(void)
{
    float renda_anual;
    float ir;

    printf("Insira sua renda anual R$: ");
    scanf("%f", &renda_anual);

    if (renda_anual < 0)
    {
        printf("Valor invalido ...renda anual menor que zero.\n");
    }

    else if (renda_anual < 1000)
    {
        ir = renda_anual;
        printf("valor do IR é de R$: %.2f\n", ir);
    }

    else if (renda_anual > 1000 && renda_anual < 25000)
    {
        ir = renda_anual * 10 / 100 - 1000;
        printf("valor do IR é de R$: %.2f\n", ir);
    }

    else
    {
        ir = renda_anual * 25 / 100 - 4750;
        printf("Valor do IR é de R$: %.2f\n", ir);
    }

    system("pause");
    return (0);
}
