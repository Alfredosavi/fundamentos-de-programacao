/*1) Escreva um algoritmo que gere a série de Fibonacci até o termo 'n' que é informado
pelo usuário. A série de Fibonacci é formada pela sequência: 1, 1, 2, 3, 5, 8, 13, 
21, 34, 55, ... , etc. */
#include <stdio.h>

int main(void)
{
    int i, atual = 1, anterior = 0, proximo, termos;

    printf("Até quantos numeros você quer mostrar na serie Fibonacci: ");
    scanf("%d", &termos);

    printf("0\t1\t");

    for (i = 1; i <= termos - 2; i++)
    {
        proximo = atual + anterior;
        anterior = atual;
        atual = proximo;
        printf("%d\t", proximo);
    }

    return 0;
}
