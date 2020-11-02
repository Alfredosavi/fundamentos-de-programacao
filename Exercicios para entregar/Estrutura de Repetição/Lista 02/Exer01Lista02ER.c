/* 1) Ler dois valores que representam os limites de um intervalo.
Mostrar os números pares e divisíveis por 3 desse intervalo em ordem crescente. O usuário 
pode informar os valores em qualquer ordem.
Por exemplo: informados 2 e 300 como limites
Mostrar: 6, 12, 18 ... // são pares e divisíveis por 3 */
#include <stdio.h>

int main(void)
{
    int valor_1;
    int valor_2;
    int i;
    int maior, menor;

    printf("Insira o primeiro valor: ");
    scanf("%d", &valor_1);

    printf("Insira o seguno valor: ");
    scanf("%d", &valor_2);

    if (valor_1 > valor_2)
    {
        i = valor_1;
        valor_1 = valor_2;
        valor_2 = i;
    }

    for (i = valor_1; i <= valor_2; i = i + 1)
    {
        if (i % 2 == 0 && i % 3 == 0)
        {
            printf("%d\t", i);
        }
    }

    printf("\n");
    system("pause");
    return (0);
}
