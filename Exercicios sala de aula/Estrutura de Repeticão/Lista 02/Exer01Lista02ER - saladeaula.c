/*1) Apresentar a tabuada de um número informado pelo usuário.
 nA tabuada deve ser apresentada na forma a seguir (sendo 'a' o valor informado e as outras letras o 
 resultado da multiplicação):
a * 0 = c
a * 1 = d
..
a * 10 = z */
#include <stdio.h>

int main(void)
{
    int i;
    int conta;
    int valor;

    printf("Informe o valor: ");
    scanf("%d", &valor);

    for (i = 0; i <= 10; i = i + 1)
    {
        conta = valor * i;
        printf("%d * %d = %d\n", valor, i, conta);
    }

    return 0;
}
