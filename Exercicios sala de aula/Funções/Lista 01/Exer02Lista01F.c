/* 2) Fazer uma função para verificar se um número é primo. A função será implementada em um 
arquivo de cabeçalho.
Fazer uma função para realizar a funcionalidade de system("pause");
a) Usar essa função para verificar se um número informado pelo usuário é primo.
Validar a entrada para que o usuário informe um número positivo e maior que zero.
b) Usar essa função para mostrar os primos no intervalo entre 1 e 100.
c) Usar essa função para fazer a média dos primos entre 200 e 100. */
#include <stdio.h>
#include "..\..\Biblioteca de funções\primo.h"

int main(void)
{
    int valor;
    char opcao;
    int i;
    int soma;
    int qtde;
    float media;
    int retorno;
    char repetir;

    do
    {
        qtde = 0;
        soma = 0;
        system("cls");
        printf("A - Verificar se um numero é primo\n");
        printf("B - Primos entre 1 e 100\n");
        printf("C - Media dos primos entre 100 e 200\n");
        printf("S - Sair\n");
        printf("Opcao: ");
        fflush(stdin);
        scanf("%c", &opcao);

        switch (opcao)
        {
        case 'A':
        case 'a':
        {
            do
            {
                printf("Informe um numero para verificar se e primo: ");
                scanf("%d", &valor);
            } while (valor <= 0);
            retorno = ehPrimo(valor);
            if (retorno == 0) //if(ehprimo(valor) == 0)
            {
                printf("%d é primo", valor);
            }
            else
            {
                printf("%d não é primo", valor);
            }
            break;
        }
        case 'B':
        case 'b':
        {
            printf("\nPrimos entre 1 e 100\n");
            for (i = 1; i <= 100; i++)
            {
                retorno = ehPrimo(i);
                if (retorno == 0)
                {
                    printf("%d\t", i);
                }
            }
            break;
        }
        case 'C':
        case 'c':
        {
            for (i = 200; i >= 100; i--)
            {
                retorno = ehPrimo(i);
                if (retorno == 0)
                {
                    soma = soma + i;
                    qtde++;
                }
            }
            media = (float)soma / qtde;
            printf("Media dos primos entre 100 e 200: %.2f\n", media);
            break;
        }
        case 'S':
        case 's':
        {
            exit(0); // finalizar o programa
        }
        default:
        {
            printf("Opcao Invalida");
        }
        }
        printf("\nDeseja repetir o programa (S/s para sim): ");
        fflush(stdin);
        scanf("%c", &repetir); //getchar()
    } while (repetir == 'S' || repetir == 's');

    return (0);
}
