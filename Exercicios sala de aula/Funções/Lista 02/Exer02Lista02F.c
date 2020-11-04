/* 2) Elaborar uma função para calcular o mdc (maior divisor comum) entre dois números. Os números 
são lidos na função chamadora e passados como parâmetro para a função que calcula o mdc. 
Esta função retorna o mdc para a função chamadora. */
#include <stdio.h>

int calculaMDC(int num1, int num2);

int main(void)
{
    char repetir;
    int valor1;
    int valor2;
    int retorno;

    do
    {
        printf("Insira um valor: ");
        scanf("%d", &valor1);

        printf("Insira um segundo valor: ");
        scanf("%d", &valor2);

        retorno = calculaMDC(valor1, valor2);

        printf("O MDC entre os valores %d e %d é o numero %d\n", valor1, valor2, retorno);
        printf("Deseja repetir o programa (S/s para sim): ");
        fflush(stdin);
        scanf("%c", &repetir);
    } while (repetir == 'S' || repetir == 's');

    return 0;
}

// funcao para calcular MDC
int calculaMDC(int num1, int num2)
{
    int mdc = 1;
    int maior;
    int menor;
    int i, j;
    int temp;
    int temp2;
    if (num1 > num2)
    {
        maior = num1;
        menor = num2;
    }
    else
    {
        maior = num2;
        menor = num1;
    }
    for (i = maior; i > 1; i--)
    {
        if (maior % i == 0)
        {
            temp = i;
        }
        for (j = menor; j > 1; j--)
        {
            if (menor % j == 0)
            {
                temp2 = j;
            }
            if (temp2 == temp)
            {
                mdc = temp2;
                break;
            }
        }
        if (mdc != 1)
        {
            break;
        }
    }
    return (mdc);
}
