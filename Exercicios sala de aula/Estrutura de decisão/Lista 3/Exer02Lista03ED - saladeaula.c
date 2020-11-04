/* 2) Ler dois números inteiros e informar:
a) Se ambos são divisíveis por 5.
b) Se pelo menos um deles é divisível por 5.
c) Se ambos são pares.
d) Se pelo menos um deles é ímpar. */
#include <stdio.h>

int main(void)
{
    int num1, num2;

    printf("Insira o primeiro numero inteiro: ");
    scanf("%d", &num1);

    printf("Insira o segundo numero inteiro: ");
    scanf("%d", &num2);

    if (num1 % 5 == 0 && num2 % 5 == 0)
    {
        printf("Ambos numeros são divisiveis por 5 !!!\n");
    }

    else if (num1 % 5 == 0 || num2 % 5 == 0)
    {
        printf("Pelo menos um desses numeros são divisiveis por 5 !!!\n");
    }

    if (num1 % 2 == 0 && num2 % 2 == 0)
    {
        printf("Ambos numeros são pares !!!\n");
    }
    else if (num1 % 3 == 0 || num2 % 3 == 0)
    {
        printf("Pelo menos um desses numeros são impares !!!\n");
    }

    system("pause");
    return (0);
}
