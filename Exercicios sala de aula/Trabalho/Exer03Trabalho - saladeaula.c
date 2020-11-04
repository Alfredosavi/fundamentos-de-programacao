/* 3) Faça um programa que imprima os 'n' (indicado pelo usuario) primeiros números
pares. Apresentar cinco valores por linha. A solução deve ser feita utilizando a 
estrutura de repetição for.
Por exemplo, se o usuário informar 10, mostrar:
0 2 4 6 8 //primeira linha com cinco números
10 12 14 16 18 // segunda linha com cinco números. */
#include <stdio.h>

int main(void)
{
    int numero, i, qtde = 0;

    printf("Insira um numero: ");
    scanf("%d", &numero);

    for (i = 0; i < numero * 2; i = i + 2)
    {
        printf("%d\t", i);
        qtde++;
        if (qtde % 5 == 0)
        {
            printf("\n");
        }
    }

    printf("\n");
    system("pause");
    return (0);
}
