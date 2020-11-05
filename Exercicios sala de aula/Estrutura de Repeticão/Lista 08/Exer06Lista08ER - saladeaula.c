/* 6) Fazer um programa para: Mostrar os divisores, calcular a quantidade deles e mostrar essa 
quantidade para os números compreendidos entre o valor "x" informado pelo usuário e "x+10", 
inclusive. Validar a entrada, o usuário deverá fornecer um número positivo entre 2 e 100. 
Ao final mostrar a maior quantidade de divisores.
A figura ao lado exemplifica a execução, utilizá-la como modelo para o programa implementado. */
#include <stdio.h>

int main(void)
{
    int i, j;
    int num;
    int qtdeDivisores;
    int numero;
    int maiorQtde = 0;

    do
    {
        printf("Informe um numero entre 2 e 100: ");
        scanf("%d", &numero);
    } while (numero < 2 || numero > 100);

    for (i = numero; i <= numero + 10; i++)
    {
        qtdeDivisores = 2; // 1 e ele mesmo
        printf("%d - 1, ", i);
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                printf("%d, ", j);
                qtdeDivisores++;
            }
        }
        if (qtdeDivisores > maiorQtde)
        {
            maiorQtde = qtdeDivisores;
            num = i;
        }
        printf("%d.   => Possui %d divisores\n", i, qtdeDivisores);
    }
    printf("\nMaior quantidade de divisores %d e é do numero %d\n", maiorQtde, num);

    return 0;
}
