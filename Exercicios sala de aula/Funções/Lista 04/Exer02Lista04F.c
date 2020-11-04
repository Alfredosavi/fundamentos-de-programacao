/* 2) Fazer uma função que verifica se um número é triangular. Um número é triangular quando
resulta da soma dos seus n dígitos sucessivos, a partir de 1. Por exemplo: 10 é triangular porque
resulta da soma de 1 + 2 + 3 + 4. O mesmo ocorre com 6, que resulta da soma de 1 + 2 + 3. */
#include <stdio.h>

char CalculaNumTriangular(int valor);

int main(void)
{
    char repetir;
    int valor;

    do
    {
        system("cls");
        printf("OBJETIVO: Verificar se um numero é triangular.\nEX: 10 => 1+2+3+4 = 10.\n\n");
        printf("Insira um valor positivo: ");
        scanf("%d", &valor);
        if (CalculaNumTriangular(valor) == 's')
        {
            printf("O numero %d é um numero triangular !!!\n", valor);
        }
        else
        {
            printf("O numero %d nao é um numero triangular !!!\n", valor);
        }
        printf("Deseja repetir o programa (S/s para sim): ");
        fflush(stdin);
        scanf("%c", &repetir);
    } while (repetir == 'S' || repetir == 's');

    return 0;
}

char CalculaNumTriangular(int valor)
{
    int i;
    int soma = 0;
    for (i = 1; i <= valor; i++)
    {
        soma = soma + i;
        if (soma == valor)
        {
            return 's';
        }
    }
    return 'n';
}
