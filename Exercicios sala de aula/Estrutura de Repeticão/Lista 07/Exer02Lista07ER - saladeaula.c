/* 2) Escreva um programa que imprima todas as possibilidades de que no lançamento de dois
dados a soma das faces seja um valor informado pelo usuário. O usuário deve informar um
valor válido, entre 2 a 12. Repetir a leitura até que o usuário informe um valor válido.
Mostrar da seguinte forma, para, por exemplo, informado o valor 7:
1 + 6 = 7
2 + 5 = 7
3 + 4 = 7
4 + 3 = 7
5 + 2 = 7
6 + 1 = 7 */
#include <stdio.h>

int main(void)
{
    char repetir;
    int soma;
    int i, j;
    do
    {
        do
        {
            printf("Informe a soma entre 2 a 12 (valor positivo): ");
            scanf("%d", &soma);
        } while (soma < 2 || soma > 12);

        for (i = 1; i < 7; i++)
        {
            for (j = 6; j >= 1; j = j - 1)
            {
                if (i + j == soma)
                {
                    printf("%d + %d = %d\n", i, j, soma);
                }
            }
        }
        printf("\nExecutar novamente (S/s para sim):"); // for (resp = 's' ; resp == 's' || resp == 'S' ; )
        fflush(stdin);
        scanf("%c", &repetir);
    } while (repetir == 'S' || repetir == 's');

    return 0;
}
