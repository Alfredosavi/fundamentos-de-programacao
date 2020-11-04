/* 3) Fazer uma função que verifica se um número é retangular. Um número é retangular se ele pode
ser obtido a partir da soma de uma sequência de números pares, inciando em 2. Por exemplo: 30 é
retangular porque resulta da soma de 2 + 4 + 6 + 8 + 10. */
#include <stdio.h>

char CalculaNumRetangular(int valor);

int main(void)
{
    char repetir;
    int valor;

    do
    {
        system("cls");
        printf("OBJETIVO: Verificar se um numero é Retangular.\nEX: 30 => 2+4+6+8+10 = 30.\n\n");
        printf("Insira um valor positivo: ");
        scanf("%d", &valor);
        if (CalculaNumRetangular(valor) == 's')
        {
            printf("O numero %d é um numero Retangular !!!\n", valor);
        }
        else
        {
            printf("O numero %d não é um numero Retangular !!!\n", valor);
        }
        printf("Deseja repetir o programa (S/s para sim): ");
        fflush(stdin);
        scanf("%c", &repetir);
    } while (repetir == 'S' || repetir == 's');

    return 0;
}

char CalculaNumRetangular(int valor)
{
    int i;
    int soma = 0;
    for (i = 2; i <= valor; i = i + 2)
    {
        soma = soma + i;
        if (soma == valor)
        {
            return 's';
        }
    }
    return 'n';
}
