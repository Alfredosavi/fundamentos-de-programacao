/* 1) Escreva um algoritmo que leia o comprimento, a largura e a altura de uma caixa
retangular e calcule o seu volume, cuja fórmula é: Volume = Comprimento * Largura *
Altura. */
#include <stdio.h>

int main(void)
{
    float comprimento, largura, altura;
    float volume;

    printf("Informe o valor do comprimento: ");
    scanf("%f", &comprimento);

    printf("Informe o valor da largura: ");
    scanf("%f", &largura);

    printf("Informe o valor da altura: ");
    scanf("%f", &altura);

    volume = comprimento * altura * largura;
    printf("Volume: %.3f\n", volume);

    return 0;
}
