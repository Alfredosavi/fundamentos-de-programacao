/* 9) Ler números inteiros informados pelo usuário até ser informado um valor negativo. 
Dentre os números informados, exceto o valor negativo que é a condição de saída:
a) contar a quantidade de números menores que 10 e os maiores que 100;
b) contar a quantidade de números ímpares;
c) contar a quantidade de números entre 10 e 100;
d) contar quantas vezes é informado um número diferente de 10, de 20 e de 30. */
#include <stdio.h>

int main(void)
{
    int numero;
    int quantidade = 0;
    int quantidade1 = 0;
    int quantidade2 = 0;
    int quantidade3 = 0;

    for (numero = 0; numero >= 0;)
    {
        printf("Informe um valor: ");
        scanf("%d", &numero);

        if (numero >= 0)
        {
            if (numero < 10 || numero > 100)
            {
                quantidade = quantidade + 1;
            }

            if (numero % 2 == 1)
            {
                quantidade1 = quantidade1 + 1;
            }

            if (numero > 10 && numero < 100)
            {
                quantidade2 = quantidade2 + 1;
            }

            if (numero != 10 || numero != 20 || numero != 30)
            {
                quantidade3 = quantidade3 + 1;
            }
        }
    }

    printf("Quantidade de numeros menores que 10 e os maiores que 100: %d\n", quantidade);
    printf("Quantidade de numeros impares: %d\n", quantidade1);
    printf("Quantidade de numeros entre 10 e 100: %d\n", quantidade2);
    printf("Quantidade de vezes que é informado um número diferente de 10, de 20 e de 30. %d\n", quantidade3);

    system("pause");
    return (0);
}
