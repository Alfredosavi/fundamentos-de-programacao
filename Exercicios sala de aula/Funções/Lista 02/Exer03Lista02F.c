/* 3) Elaborar uma função para calcular o mmc (mínimo múltiplo comum) entre dois números.
Os números são lidos e passados como parâmetro para a função que calcula o mmc. Esta função 
retorna o mmc para a função chamadora. */
#include <stdio.h>
#include "..\..\Biblioteca de funções\calculaMDC.h"

int main(void)
{
    int valor1, valor2;
    char repetir;
    int resultado;

    do
    {
        system("cls");
        printf("Informe um numero para verificar MMC: ");
        scanf("%d", &valor1);

        printf("Informe um segundo numero para verificar MMC: ");
        scanf("%d", &valor2);

        resultado = (valor1 * valor2) / calculaMDC(valor1, valor2);
        printf("MMC entre %d e %d é o %d\n", valor1, valor2, resultado);
        printf("Deseja repetir o programa (S/s para sim): ");
        fflush(stdin);
        scanf("%c", &repetir);
    } while (repetir == 'S' || repetir == 's');

    return 0;
}
