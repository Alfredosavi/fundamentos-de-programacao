/* 3) Ler um número positivo e maior que zero (validar a entrada).
Esse número indica a quantidade de valores ímpares e não divisíveis por 5 e divisíveis por 7 
que devem ser mostrados.
Apresentar 'n' valores por linha. 'n' é informado pelo usuário e deve ser maior que zero.
Validar a entrada. */
#include <stdio.h>

int main(void)
{
    int numero;
    char repetir;
    int valor_linha;
    int contador;
    int aux;

    do
    {
        do
        {
            printf("Insira um numero: ");
            scanf("%d", &numero);
            printf("Informe um valor para mostrar n valores por linha: ");
            scanf("%d", &valor_linha);
        } while (numero < 0 || valor_linha < 0);

        contador = 0;
        aux = 1;
        do
        {
            if (aux % 2 != 0 && aux % 5 != 0 && aux % 7 == 0)
            {
                contador++;
                printf("%d\t", aux);
                if (contador % valor_linha == 0)
                {
                    printf("\n");
                }
            }
            aux++;

        } while (contador < numero);
        printf("\n");
        printf("Voce deseja repetir (s/S para sim): ");
        fflush(stdin);
        scanf("%c", &repetir);
    } while (repetir == 'S' || repetir == 's');

    return 0;
}
