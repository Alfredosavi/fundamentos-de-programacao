/* 3) Ler dois números que representam os limites de um intervalo. Ler, primeiro, o limite
inferior que deve ser positivo e em seguida ler o segundo valor que deve ser maior que o
limite inferior. Validar as entradas
Apresentar os pares e divisíveis por 3 de cada um dos valores do intervalo da seguinte forma,
para 115 e 123 como limites.  */
#include <stdio.h>

int main(void)
{
    char repetir;
    int inferior, superior;
    int i, j;

    do
    {
        system("cls");
        do
        {
            printf("Informe o limite inferior (valor positivo): ");
            scanf("%d", &inferior);
        } while (inferior < 0);
        do
        {
            printf("Informe o limite superior (valor maior que %d): ", inferior);
            scanf("%d", &superior);
        } while (superior <= inferior);
        printf("\n");
        for (i = inferior; i <= superior; i++)
        {
            printf("%d - ", i);
            for (j = 1; j <= i; j++)
            {
                if (j % 2 == 0 && j % 3 == 0)
                {
                    printf("%d, ", j);
                }
            }
            printf("\n\n");
        }
        printf("Deseja repetir o programa (S/s para sim): ");
        fflush(stdin);
        scanf("%c", &repetir);
    } while (repetir == 's' || repetir == 'S');

    return 0;
}
