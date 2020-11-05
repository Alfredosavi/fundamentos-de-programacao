/* Fazer um programa que calcule o fatorial dos números inteiros de 1 até 12. Fazer a saída do
programa, da parte do fatorial, como mostrado na figura a seguir. Colocar o símbolo de
multiplicação somente entre dois números. */
#include <stdio.h>

int main(void)
{
    int valor;
    int i, j;
    char repetir;
    int soma;

    do
    {
        system("cls");
        do
        {
            printf("Insira um valor para calcular seu fatorial: ");
            scanf("%d", &valor);
        } while (valor < 0);
        printf(" 1! => 1 = 1\n");
        for (i = 2; i <= valor; i++)
        {
            soma = 1;
            printf("%2d! => ", i);
            for (j = i; j >= 2; j--)
            {
                printf("%d * ", j);
                soma = soma * j;
            }
            printf(" 1 = %d\n", soma);
        }
        printf("Deseja repetir o programa(S/s para sim): ");
        fflush(stdin);
        scanf("%c", &repetir);
    } while (repetir == 'S' || repetir == 's');

    return 0;
}
