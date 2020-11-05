/* 5) Calcular o salário líquido de uma pessoa. Sobre o salário bruto incidem descontos de
de imposto de renda e de INSS */
#include <stdio.h>

int main(void)
{
    float salarioBruto;
    float INSS;
    float IR;
    float salarioLiquido;

    printf("Informe o salario bruto: ");
    scanf("%f", &salarioBruto);

    printf("Informe o percentual de INSS (2 para 2%%): ");
    scanf("%f", &INSS);

    printf("Informe o percentual de IR (2 para2%%): ");
    scanf("%f", &IR);

    salarioLiquido = salarioBruto - (salarioBruto * INSS / 100) - (salarioBruto * IR / 100);
    printf("O salario liquido é de R$: %.2f\n", salarioLiquido);

    return (0);
}
