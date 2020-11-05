/* 12) Faça um programa que imprima os 'n' (indicado pelo usuário) primeiros números pares. 
Apresentar cinco valores por linha.
Por exemplo, se o usuário informar 10, mostrar:
0    2    4    6     8 // primeira linha com cinco números
10  12   14   16    18 // segunda linha com cinco números. */
#include <stdio.h>

int main(void)
{
    int i, quantidade = 0, numero;

    printf("Informe um numero inteiro: ");
    scanf("%d", &numero);

    for (i = 0; i < numero; i = i + 2)
    {
        printf("%d\t", i);
    }

    return 0;
}
