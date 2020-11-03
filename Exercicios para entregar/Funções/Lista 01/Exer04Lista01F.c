/* 4) Fazer uma função que apresenta o resultado da multiplicação de dois números. 
Usar essa função para:
a) Apresentar a multiplicação de dois números informados pelo usuário.
b) Apresentar a tabuada (0 a 10) de um número informado pelo usuário. */
#include <stdio.h>

int multdoisnum(int valor1, int valor2);

int main(void)
{
    char repetir;
    int valor1, valor2;
    char opcao;
    int i;

    do
    {
        system("cls");
        printf("A - Apresentar multiplicacao de dois numeros informados\n");
        printf("B - Apresentar a tabuada (0 a 10) de um numero informado\n");
        printf("Opcao: ");
        fflush(stdin);
        scanf("%c", &opcao);
        switch (opcao)
        {
        case 'a':
        case 'A':
        {
            printf("\n");
            printf("Informe um numero: ");
            scanf("%d", &valor1);
            printf("Informe um segundo numero: ");
            scanf("%d", &valor2);
            printf("%d * %d = %d\n", valor1, valor2, multdoisnum(valor1, valor2));
            break;
        }
        case 'b':
        case 'B':
        {
            printf("\n");
            printf("Informe um numero para mostrar sua tabuada: ");
            scanf("%d", &valor1);
            for (i = 1; i <= 10; i++)
            {
                printf("%d * %d = %d\n", i, valor1, multdoisnum(valor1, i));
            }
            break;
        }
        default:
        {
            printf("Opcao Invalida !!!\n");
        }
        }
        printf("Deseja repetir o programa (S/s para sim): ");
        fflush(stdin);
        scanf("%c", &repetir);
    } while (repetir == 's' || repetir == 'S');

    return 0;
}

int multdoisnum(int valor1, int valor2)
{
    int resultado;
    resultado = valor1 * valor2;
    return (resultado);
}
