/* 3) Fazer uma função para calcular o fatorial de um número. A função será implementada em um 
arquivo de cabeçalho.
a) Usar essa função para mostrar o fatorial dos números entre 1 e 8.
b) Usar essa função para mostrar o fatorial de um valor informado pelo usuário. Continuar a leitura 
enquanto forem informados valores positivos. */
#include <stdio.h>
#include "..\..\Biblioteca de funções\fatorial.h"

int main(void)
{
    int i;
    int num;
    int retorno;

    do
    {
        printf("Insira um numero para calcular seu fatorial: ");
        scanf("%d", &num);
    } while (num <= 0);

    retorno = calculaFatorial(num);
    printf("Fatorial de %d � %d\n", num, retorno);
    printf("\n\n");
    printf("Fatorial entre 1 e 12\n");

    for (i = 1; i <= 12; i++)
    {
        printf("%2d! => ", i);
        mostraFatorial(i);
        retorno = calculaFatorial(i);
        printf(" = %d\n", retorno);
    }

    return 0;
}
