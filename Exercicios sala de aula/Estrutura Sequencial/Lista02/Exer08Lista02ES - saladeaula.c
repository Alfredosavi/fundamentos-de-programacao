/* 8) Faca um algoritmo que leia o salário bruto mensal de um funcionário, calcule e mostre
os valores conforme o modelo.
Salario Bruto : R$
(-) IR (15%) : R$
(-) INSS (11%) : R$
(-) Sindicato (3%) : R$
Salario Liquido : R$
Observação: É possível fazer esse algoritmo utilizando somente três variáveis: uma para
para ler o salário bruto, outra os descontos e outra para o salário líquido. Tente! */
#include <stdio.h>

int main(void)
{
    float salariobruto;
    float descontos;
    float salarioliquido;

    printf("Informe seu salario bruto R$: ");
    scanf("%f", &salariobruto);

    printf("Seu salario bruto é de R$: %.2f\n", salariobruto);

    descontos = (salariobruto * 0.15);
    printf("Imposto de renda (15%%) R$: %.2f\n", descontos);

    descontos = (salariobruto * 0.11);
    printf("INSS (11%%) R$: %.2f\n", descontos);

    descontos = (salariobruto * 0.03);
    printf("Sindicato (3%%) R$: %.2f\n", descontos);

    descontos = (salariobruto - ((salariobruto * 0.15) + (salariobruto * 0.11) + (salariobruto * 0.03)));
    printf("Salario Liquido R$: %.2f\n");

    system("pause");
    return (0);
}
