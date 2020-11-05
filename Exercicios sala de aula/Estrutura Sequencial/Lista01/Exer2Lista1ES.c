/* 2) Escreva um algoritmo que leia o valor de uma prestação e da taxa de juros cobrada
pelo atraso da prestação. Calcule o valor a ser pago por meio da fórmula: Valor com juros
= Prestação + (Prestação * Taxa /100). */
#include <stdio.h>

int main(void)
{
    float Prestacao;
    float taxa;
    float valorJuros;

    printf("Informe o valor da prestação: ");
    scanf("%f", &Prestacao);

    printf("Informe a taxa (ex. 5 para 5%%); ");
    scanf("%f", &taxa);

    valorJuros = Prestacao + Prestacao * taxa / 100;
    printf("Valor acrescido de juros é de R$ %.2f\n", valorJuros);

    return 0;
}
