/* 7) Apresentar as "n" primeiras raízes quadradas exatas. Validar n que deve ser positivo.
Exemplo: apresentado 5 para n, mostrar
Número    raiz
1          1
4          2
9          3
16         4
25         5 */
#include <stdio.h>

int main(void)
{
    int quantas;
    char repetir;
    int qtde, aux;
    int numero;

    do
    {
        aux = 1, qtde = 0;
        system("cls");
        printf("Objetivo: Apresentar n raizes quadradas exatas !!!\n\n");
        do
        {
            printf("Apresentar quantas raizes quadradas exatas: ");
            scanf("%d", &quantas);
        } while (quantas <= 0);
        printf("\n\n");
        printf("Numero      Raiz\n");
        do
        {
            numero = aux * aux;
            printf("%2d          %2d", numero, aux);
            aux++;
            qtde++;
            printf("\n");
        } while (qtde < quantas);
        printf("\n\n");
        printf("Deseja repetir o programa (S/s para sim): ");
        fflush(stdin);
        scanf("%c", &repetir);
    } while (repetir == 'S' || repetir == 's');

    return 0;
}
