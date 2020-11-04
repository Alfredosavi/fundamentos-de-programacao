/*7) Elaborar um algoritmo que lê dois valores, verifica se o primeiro é múltiplo do
segundo e escreve a mensagem "São múltiplos" ou "Não são múltiplos" dependendo da
condição. Verificar para que não seja realizada uma divisão por zero. Nesse caso,
informar que não é possível realizar uma divisão por zero. */
#include <stdio.h>

int main(void)
{
    int valor1, valor2;

    printf("Insira o primeiro valor: ");
    scanf("%d", &valor1);

    printf("Insira o segundo valor: ");
    scanf("%d", &valor2);

    if (valor2 == 0)
    {
        printf("Não pode dividir um numero por 0");
    }
    else
    {
        if (valor1 % valor2 == 0)
        {
            printf("São multiplos");
        }
        else
        {
            printf("Não são multiplos");
        }
    }

    return 0;
}
