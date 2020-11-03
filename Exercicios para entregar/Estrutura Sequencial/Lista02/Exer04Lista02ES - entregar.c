/* 4) Fazer um algoritmo que leia um valor float que representa o salário de uma pessoa.
Apresente separadamente os reais (parte inteira) e os centavos (parte decimal).
Observação: apresentar os centavos como inteiro de dois dígitos (98 em vez de 0.98)
Exemplo:
Salário informado: 1345.98
Reais: 1345
Centavos: 98 */
#include <stdio.h>

int main(void)
{
    double salario;
    int intsalario;
    int centavos;

    printf("Informe seu salario float R$: ");
    scanf("%lf", &salario);

    intsalario = salario;
    centavos = (salario - intsalario) * 100;

    printf("Salario Informado R$: %.2lf\n", salario);
    printf("Reais: %d\n", intsalario);
    printf("Centavos: %d\n", centavos);

    system("pause");
    return (0);
}
