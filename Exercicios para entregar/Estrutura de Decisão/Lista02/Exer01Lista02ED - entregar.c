/* 1) A contribuição para o INSS é calculada da seguinte forma:
 a) salário bruto até três salários mínimos = INSS 8%
 b) salário bruto acima de três salários mínimos = INSS 10%
 c) para as contribuições que seriam maiores que o salário mínimo, a importancia é de um
salário mínimo.
Elaborar um algoritmo que receba como entrada o salário bruto, calcule o INSS e o
salário líquido restante e informe-os. */
#include <stdio.h>

int main(void)
{
    float salariobruto;
    float salariominimo;
    float salarioliquido;
    float imposto;

    printf("Insira seu salario bruto R$: ");
    scanf("%f", &salariobruto);

    printf("Insira o valor de um salario minimo R$: ");
    scanf("%f", &salariominimo);

    if (salariobruto >= 3 * salariominimo)
    {
        imposto = (salariobruto * 8) / 100;
    }
    else //if(salariobruto < 3 * salariominimo)
    {
        imposto = salariobruto / 10; // salariobruto * 10 / 100;
        if (imposto > salariominimo) //c
        {
            imposto = salariominimo;
        }
    }
    salarioliquido = salariobruto - imposto;
    printf("O INSS cobrará R$: %.2f\n", imposto);
    printf("Seu salario liquido será de R$: %.2f\n", salarioliquido);
    system("pause");
    return (0);
}
