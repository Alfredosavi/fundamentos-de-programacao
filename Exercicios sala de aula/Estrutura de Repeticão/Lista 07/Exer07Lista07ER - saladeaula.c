/* 7) No intervalo entre 0 e 100, utilizando uma estrutura for para mostrar cada um dos itens 
em listagens separadas. Colocar um cabeçalho/título que identifique cada uma das listagens:
	a) os valores desse intervalo em ordem decrescente.
	b) os valores pares desse intervalo, sem utilizar if, apenas a variável de inicialização, 
        controle e incremento/decremento do for.
	c) os múltiplos de 10, em ordem crescente e sem utilizar if, apenas a variável de 
        inicialização, controle e incremento/decremento do for.
	d) os múltiplos de 5, em ordem decrescente e sem utilizar if, apenas a variável de 
        inicialização, controle e incremento/decremento do for. */
#include <stdio.h>

int main(void)
{
    int i;
    printf("No intervalo de 0 a 100 --> Mostrar os valores desse intervalo em ordem decrescente\n\n");
    for (i = 100; i >= 0; i--)
    {
        printf("%d\t", i);
    }

    printf("\n\n");
    printf("No intervalo de 0 a 100 --> Mostrar os numeros pares\n\n");
    for (i = 2; i <= 100; i = i + 2)
    {
        printf("%d\t", i);
    }

    printf("\n\n");
    printf("No intervalo de 0 a 100 --> Mostrar os multiplos de 10 em ordem crescente\n\n");
    for (i = 10; i <= 100; i = i + 10)
    {
        printf("%d\t", i);
    }

    printf("\n\n");
    printf("No intervalo de 0 a 100 --> Mostrar os multiplos de 5 em ordem decrescente\n\n");
    for (i = 100; i >= 0; i = i - 5)
    {
        printf("%d\t", i);
    }

    return 0;
}
