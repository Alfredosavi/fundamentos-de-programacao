// 2) Calcular e mostrar o fatorial de um nómero informado pelo usuário.
#include <stdio.h>

int main(void)
{
    int i;
    int valor = 1;

    printf("Informe o valor do fatorial: ");
    scanf("%d", &valor);

    for (i = valor - 1; i >= 2; i--)
    {
        valor = valor * i;
    }
    printf("Fatorial calculado: %d\n", valor);

    return 0;
}
