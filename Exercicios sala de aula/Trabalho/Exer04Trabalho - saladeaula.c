/* 4) Sabe-se que um número da forma n3 é igual a soma de n ímpares consecutivos.
Por exemplo: 13 = 1, 23 = 3+5, 33 = 7+9+11, 43 = 13+15+17+19, ...
Escreva um programa que imprima os ímpares consecutivos cuja soma á igual a n3
para n no intervalo de 1 até 10 (inclusive). Mostre da seguinte forma:
1^3 = 1
2^3 = 8
3^3 = 27 */
#include <stdio.h>

int main(void)
{
    int impar = 1;
    int soma;
    int numero;
    int i;
    int j;

    for (numero = -1; numero <= 0;)
    {
        printf("Quantas cubos mostrar: ");
        scanf("%d", &numero);
        for (i = 1; i <= numero; i++)
        {
            soma = 0;
            printf("%d^3 => ", i);
            for (j = 1; j <= i; j++)
            {
                printf("%d", impar);
                if (j < i)
                {
                    printf(" + ");
                }
                soma = soma + impar;
                impar = impar + 2;
            }
            printf(" = %d\n", soma);
        }
    }

    return 0;
}
