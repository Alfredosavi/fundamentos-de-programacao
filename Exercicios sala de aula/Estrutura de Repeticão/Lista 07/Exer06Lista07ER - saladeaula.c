/* 6) Apresentar os n primeiros números pares e divisíveis por 3 informados pelo usuário.
Se o usuário informar um número negativo transformá-lo em positivo antes de utilizar.
Por exemplo:
Informe a quantidade de números pares a serem mostrados:
3
mostrar:
Os 3 primeiros números pares são:  6 12 18 */
#include <stdio.h>

int main(void)
{
    char repetir;
    int valor;
    int qtde;
    int aux;

    do
    {
        qtde = 0;
        aux = 1;
        printf("Informe um numero: ");
        scanf("%d", &valor);

        if (valor < 0)
        {
            valor = valor * (-1);
        }

        do
        {
            if (aux % 2 == 0 && aux % 3 == 0)
            {
                printf("%d\t", aux);
                qtde++;
            }
            aux++;
        } while (qtde < valor);

        printf("\nExecutar novamente (S/s para sim):");
        fflush(stdin);
        scanf("%c", &repetir);
    } while (repetir == 'S' || repetir == 's');

    return 0;
}
