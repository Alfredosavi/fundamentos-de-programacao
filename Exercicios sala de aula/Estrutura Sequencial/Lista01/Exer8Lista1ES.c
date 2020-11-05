/* 8) Ler dois valores A e B e efetue a troca do conteúdo das duas variáveis lidas, de forma
que a variável A passe a ter o valor de B e a variável B o valor de A. Mostre o conteúdo
das variáveis antes e depois da troca. */
#include <stdio.h>

int main(void)
{
    int valorA;
    int valorB;
    int valorC;

    printf("Informe o valor de A: ");
    scanf("%d", &valorA);

    printf("Informe o valor de B: ");
    scanf("%d", &valorB);

    printf("Antes da troca\n");
    printf("A = %d e B = %d\n", valorA, valorB);

    valorC = valorA;
    valorA = valorB;
    valorB = valorC;

    printf("Depois da troca\n");
    printf("A = %d e B = %d\n", valorA, valorB);

    system("pause");
    return 0;
}
