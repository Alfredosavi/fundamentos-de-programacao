#include <stdio.h>
#include "..\..\Biblioteca de funções\Funcoes Uteis.h"

int main(void)
{
    char repetir;
    char opcao;
    int num, num2;
    int retorno;
    int i;
    int maiorqtde, numMaiorqtde;

    do
    {
        system("cls");
        printf("A - quantidade de divisores de um numero\n");
        printf("B - quantidade de divisores de um intervalo\n");
        printf("C - maior quantidade de divisores\n");
        printf("Opção: ");
        fflush(stdin);
        scanf("%c", &opcao);

        switch (opcao)
        {
        case 'A':
        case 'a':
        {
            do
            {
                printf("Informe um numero (0 ou negativo para finalizar): ");
                scanf("%d", &num);
                if (num > 0)
                {
                    retorno = qtdeDivisores(num);
                    printf("%d possui %d divisores\n", num, retorno);
                }
            } while (num > 0);
            break;
        }
        case 'B':
        case 'b':
        {
            do
            {
                printf("Informe o limite inferior: ");
                scanf("%d", &num);
            } while (num < 0);
            do
            {
                printf("Informe o limite superior: ");
                scanf("%d", &num2);
            } while (num2 < 0);
            if (num > num2)
            {
                i = num;
                num = num2;
                num2 = i;
            }
            for (i = num; i <= num2; i++)
            {
                retorno = qtdeDivisores(i);
                printf("%d possui %d divisores\n", i, retorno);
            }
            break;
        }
        case 'C':
        case 'c':
        {
            maiorqtde = 0;
            do
            {
                printf("Informe um numero positivo: ");
                scanf("%d", &num);
                if (num > 0)
                {
                    retorno = qtdeDivisores(num);
                    if (retorno > maiorqtde)
                    {
                        maiorqtde = retorno;
                        numMaiorqtde = num;
                    }
                }
            } while (num > 0);
            printf("Maior quantidade de divisores e %d e pertence ao numero %d\n", maiorqtde, numMaiorqtde);
            break;
        }
        default:
        {
            printf("Opcao Invalida\n");
        }
        }
        printf("Deseja repetir o programa (S/s para sim): ");
        fflush(stdin);
        scanf("%c", &repetir);
    } while (repetir == 'S' || repetir == 's');

    return 0;
}
