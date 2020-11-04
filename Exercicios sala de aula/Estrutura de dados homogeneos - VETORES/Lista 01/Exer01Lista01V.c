/* 1) Ler dez números inteiros. Validar as entradas para que sejam informados valores positivos.
E em listagens separadas:
a) mostrar os pares;
b) mostrar os divisíveis por 3 e por 5 e contar a quantidade deles e mostrar.
c) mostrar os valores menores que 10 e os maiores que 100.
d) mostrar os valores maiores que 10 e menores que 100.
e) mostrar os ímpares e a quantidade de ímpares. Calcular o percentual dos ímpares em relação 
a quantidade total de números.
O programa permanecerá em execução até que seja escolhida a opção sair ou alguma equivalente. */
#include <stdio.h>

int main(void)
{
    int numeros[10];
    int i;
    int qtde = 0;

    for (i = 0; i < 10; i++)
    {
        do
        {
            printf("Informe o valor para numeros[%d]: ", i);
            scanf("%d", &numeros[i]);
        } while (numeros[i] <= 0);
    }

    printf("\nPares\n");
    for (i = 0; i < 10; i++)
    {
        if (numeros[i] % 2 == 0)
        {
            printf("%d\t", numeros[i]);
        }
    }

    printf("\nDivisiveis por 3 e por 5\n");
    for (i = 0; i < 10; i++)
    {
        if (numeros[i] % 3 == 0 && numeros[i] % 5 == 0)
        {
            printf("%d\t", numeros[i]);
            qtde++;
        }
    }
    printf("\nHa %d valores divisiveis por 3 e por 5.\n", qtde);

    printf("\nMostrar valores menores que 10 e maiores que 100\n");
    for (i = 0; i < 10; i++)
    {
        if (numeros[i] <= 10 || numeros[i] >= 100)
        {
            printf("%d\t", numeros[i]);
        }
    }

    printf("\nMaiores que 10 e menores que 100\n");
    for (i = 0; i < 10; i++)
    {
        if (numeros[i] >= 10 && numeros[i] <= 100)
        {
            printf("%d\t", numeros[i]);
        }
    }

    printf("\nImpares\n");
    qtde = 0;
    for (i = 0; i < 10; i++)
    {
        if (numeros[i] % 2 != 0)
        {
            printf("%d\t", numeros[i]);
            qtde++;
        }
    }
    printf("\nPercentual de impares: %.2f\n", (float)qtde / 10);

    return 0;
}
