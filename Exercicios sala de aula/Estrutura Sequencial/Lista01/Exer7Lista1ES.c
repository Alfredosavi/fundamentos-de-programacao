/*  Escreva um algoritmo que converta um valor temperatura de graus Fahrenheit para
graus Celsius, cuja fórmula de conversão é: (graus Fahrenheit - 32) * (5/9). */
#include <stdio.h>

int main(void)
{
    float fahr;
    float celsius;

    printf("Informe o valor da temperatura em graus fahrenheit: ");
    scanf("%f", &fahr);

    celsius = (fahr - 32) * (5.0 / 9);
    printf("O valor de %.2f graus fahrenheit corresponde ha de %.2f graus celsius\n", fahr, celsius);

    system("pause");
    return 0;
}
