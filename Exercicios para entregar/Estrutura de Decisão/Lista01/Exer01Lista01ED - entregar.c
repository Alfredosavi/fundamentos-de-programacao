/* 1) Ler um número e apresentar o seu módulo. */
#include <stdio.h>

int main(void)
{
    int numero;

    printf("Insira o numero: ");
    scanf("%d", &numero);

    if (numero < 0)
    {
        numero = numero * (-1);
    }

    printf("Numero: %d\n", numero);
    system("pause");
    return (0);
}
