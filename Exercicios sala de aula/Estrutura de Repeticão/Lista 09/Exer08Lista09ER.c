/* 8) Apresentar os primos entre dois valores informados pelo usuário, com x valores por linha.
Validar as entradas. */
#include <stdio.h>
int main(void)
{
    int superior, inferior;
    int xvalorlinha;
    char repetir;

    do
    {
        system("cls");
        do
        {
            printf("Informe um valor inferior para o limite: ");
            scanf("%d", &inferior);
        } while (inferior < 0);
        do
        {
            printf("Informe um valor superior para o limite: ");
            scanf("%d", &superior);
        } while (superior < inferior);
        printf("Deseja repetir o programa (S/s para sim): ");
        fflush(stdin);
        scanf("%c", &repetir);
    } while (repetir == 's' || repetir == 'S');

    return 0;
}
