/* 4) Escreva um algoritmo que dados a quantidade de litros de combustível utilizada, os
quilômetros percorridos por um automóvel e o valor do litro de combustível, calcule o
gasto em reais por km. */
#include <stdio.h>

int main(void)
{
    float litros;
    float km;
    float valorlitro;
    float gastokm;

    printf("Informe a quantidade de litros usado: ");
    scanf("%f", &litros);

    printf("Informe os quilometros percorridos pelo automovel: ");
    scanf("%f", &km);

    printf("Informe o valor do litro de gasosa: ");
    scanf("%f", &valorlitro);

    gastokm = valorlitro * litros / km;
    printf("O gasto por km foi de R$: %.2f\n", gastokm);

    system("pause");
    return (0);
}
