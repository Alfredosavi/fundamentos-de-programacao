/* 4) Escreva um algoritmo que leia um número e verifique se ele se encontra no 
intervalo entre 5 e 20. Mostre uma mensagem se o número está nesse intervalo. */
#include <stdio.h>

int main(void)
{
    float numero;

    printf("Insira o numero: ");
    scanf("%f", &numero);

    if (numero > 5 || numero > 20)
    {
        printf("O numero está no intervalo entre 5 e 20");
    }
    else if (numero < 20 || numero < 5)
    {
        printf("O numero não está no intervalo diferente de 5 e 20");
    }

    return 0;
}
