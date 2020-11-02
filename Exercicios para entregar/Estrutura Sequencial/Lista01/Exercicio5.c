/* 5) Escreva um algoritmo que leia dois valores que são o raio e altura de um cilindro e
calcule o seu volume, cuja fórmula é: Volume = 3.1415 * Raio2 * Altura. */
#include <stdio.h>

int main(void)
{
    float raio;
    float altura;
    float volume;

    printf("Informe o valor do raio, em metros, do cilindro: ");
    scanf("%f", &raio);

    printf("Informe o valor da altura, em metros, do cilindro: ");
    scanf("%f", &altura);

    volume = 3.1415 * raio * raio * altura;

    printf("O volume do cilindro em metros é de: %.3f", volume);

    return 0;
}
