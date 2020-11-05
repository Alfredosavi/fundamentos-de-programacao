/* 5) Apresentar n valores divisíveis por 5 e não por 7 com x valores por linha. 
Validar n e x que devem ser positivos. */
#include <stdio.h>

int main(void)
{
    char repetir;
    int valor;
    int nporlinha;
    int qtde;
    int aux;

    do
    {
        system("cls");
        aux = 1, qtde = 0;
        printf("Objetivo: Apresentar n valores divisiveis por 5 e não por 7 com Y valores por linha !!!\n\n");
        do
        {
            printf("Quantos valores mostrar: ");
            scanf("%d", &valor);
        } while (valor <= 0);
        do
        {
            printf("Quantos valores mostrar por linha: ");
            scanf("%d", &nporlinha);
        } while (nporlinha <= 0);
        do
        {
            if (aux % 5 == 0 && aux % 7 != 0)
            {
                qtde++;
                printf("%d\t", aux);
                if (qtde % nporlinha == 0)
                {
                    printf("\n");
                }
            }
            aux++;
        } while (qtde < valor);
        printf("\n\n");
        printf("Deseja repetir o programa (S/s para sim): ");
        fflush(stdin);
        scanf("%c", &repetir);
    } while (repetir == 'S' || repetir == 's');

    return 0;
}
