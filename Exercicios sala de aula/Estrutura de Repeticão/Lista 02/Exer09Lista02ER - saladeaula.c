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
    int quantidade;

    for (numero = 0; numero >= 0;)
    {
        printf("Informe um valor: ");
        scanf("%d", &numero);

        if (numero >= 0)
        {
            if (numero < 10 && numero > 100)
            {
                quantidade = quantidade + 1;
            }
        }
    }
    printf("\nQuantidade de numeros menores que 10 e os maiores que 100: %d\n", quantidade);

    return 0;
}
