/* 3) Elaborar uma função que desenha um retângulo na tela, utilizando o caractere *.
Por exemplo: Informados: 5 e 3
Desenhado:
* * * * *
* * * * *
* * * * * */
#include <stdio.h>

void desenharetangulo(int lin, int col);

int main(void)
{
    char repetir;
    int colunas, linhas;

    do
    {
        system("cls");
        printf("Informe o numero de linhas: ");
        scanf("%d", &linhas);
        printf("Informe o numero de colunas: ");
        scanf("%d", &colunas);
        printf("\n\n");
        desenharetangulo(linhas, colunas);
        printf("\n");
        printf("Deseja repetir o programa (S/s para sim): ");
        fflush(stdin);
        scanf("%c", &repetir);
    } while (repetir == 'S' || repetir == 's');

    return 0;
}

void desenharetangulo(int lin, int col)
{
    int i, j;

    for (i = 1; i <= lin; i++)
    {
        printf(" * ");
        for (j = 1; j < col; j++)
        {
            printf(" * ");
        }
        printf("\n");
    }
}
