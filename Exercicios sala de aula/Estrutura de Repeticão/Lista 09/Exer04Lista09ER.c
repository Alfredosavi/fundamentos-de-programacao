/* 4) Apresentar n valores que atende a x e y condições. n, x e y são informados 
pelo usuário e devem ser maiores que zero. Validar. */
#include <stdio.h>

int main(void)
{
    int mostrar;
    int condx;
    int condy;
    int i;
    char repetir;
    int aux;
    int qtde;

    do
    {
        system("cls");
        aux = 1, qtde = 0;
        printf("Objetivo: Apresentar n valores que atendem as condicoes x e y !!!\n\n");
        do
        {
            printf("Quantos valores mostrar (valor positivo): ");
            scanf("%d", &mostrar);
        } while (mostrar <= 0);
        do
        {
            printf("Qual o primeiro divisor, condicao X (valor positivo): ");
            scanf("%d", &condx);
        } while (condx <= 0);
        do
        {
            printf("Qual o segundo divisor, condicao Y (valor positivo): ");
            scanf("%d", &condy);
        } while (condy <= 0);
        printf("\n");
        do
        {
            if (aux % condx == 0 && aux % condy == 0)
            {
                printf("%d\t", aux);
                qtde++;
            }
            aux++;
        } while (qtde < mostrar);
        printf("\n\n");
        printf("Deseja repetir o programa (S/s para sim)");
        fflush(stdin);
        scanf("%c", &repetir);
    } while (repetir == 'S' || repetir == 's');

    return 0;
}
