/* 7) Fazer um programa que leia cinco números inteiros no intervalo entre 10 até 20, inclusive. 
Validar a entrada.
Para cada número exibir a sequência dos pares de 2 até o número gerado e a soma desses pares. */
#include <stdio.h>

int main(void)
{
    int numero;
    char repetir;
    int qtde;
    int soma;

    do
    {
        system("cls");
        qtde = 0, soma = 0;
        do
        {
            do
            {
                printf("Informe um numero entre (10 - 20): ");
                scanf("%d", &numero);
            } while (numero < 10 || numero > 20);
            qtde++;

        } while (qtde < 5);
        printf("Deseja repetir o programa (S/s para sim): ");
        fflush(stdin);
        scanf("%c", &repetir);
    } while (repetir == 's' || repetir == 'S');

    return 0;
}
