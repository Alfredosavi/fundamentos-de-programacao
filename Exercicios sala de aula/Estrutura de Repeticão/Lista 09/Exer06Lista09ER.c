/* 6) Ler dois valores que representam os limites do intervalo. Apresentar os valores pares e
divisíveis por cinco desse intervalo em ordem decrescente. O usuário pode informar os
valores em ordem crescente e decrescente. */
#include <stdio.h>

int main(void)
{
    int inferior, superior;
    char repetir;
    int i;

    do
    {
        system("cls");
        printf("Objetivo: Apresentar valores pares e divisiveis por 5 desse intervalo em ordem decrescente !!!\n\n");
        printf("Informe um valor para o limite inferior do interalo: ");
        scanf("%d", &inferior);
        printf("Informe um valor para o limite superior do interalo: ");
        scanf("%d", &superior);
        if (inferior > superior)
        {
            i = superior;
            superior = inferior;
            inferior = i;
        }
        for (i = superior; i >= inferior; i--)
        {
            if (i % 2 == 0 && i % 5 == 0)
            {
                printf("%d\t", i);
            }
        }
        printf("\n\n");
        printf("Deseja repetir o programa (S/s para sim): ");
        fflush(stdin);
        scanf("%c", &repetir);
    } while (repetir == 's' || repetir == 'S');

    return 0;
}
