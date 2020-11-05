/* 6) Escreva um algoritmo que converta um valor de temperatura de graus Celsius para
graus Fahrenheit, cuja fórmula de conversão é: (9 * graus Celsius + 160) /5. */
#include <stdio.h>

int main(void)
{
    float graus;
    float fahrenheit;

    printf("Insira o valor da temperatura em graus celsius: ");
    scanf("%f", &graus);

    fahrenheit = (9 * graus + 160) / 5;
    printf("O valor de %.2f graus celsius corresponde ha de %.2f graus fahrenheit\n", graus, fahrenheit);

    system("pause");
    return 0;
}
