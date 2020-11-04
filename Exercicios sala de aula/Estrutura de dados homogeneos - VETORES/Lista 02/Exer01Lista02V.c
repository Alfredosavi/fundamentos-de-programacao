/*1) Gerar um vetor de inteiros com 15 elementos. Gerar outros dois vetores um contendo os 
valores pares e outro os ímpares. */
#include <stdio.h>

#include "..\..\Biblioteca de funções\Gerar valores aleatorios para vetor.h"

int main(void)
{
    int tamanho;
    int i;
    int indp = 0, indi = 0;

    do
    {
        printf("Informe o tamanho do vetor: ");
        scanf("%d", &tamanho);
    } while (tamanho <= 0);

    int vetor[tamanho];
    gerarValoresVetoresInt(vetor, tamanho, 100);
    printf("\n");
    printf("Vetor A:\n");
    printf("INDICE      VALOR\n");
    for (i = 0; i < tamanho; i++)
    {
        printf("%d            %d\n", i, vetor[i]);
    }
    int vetorA[tamanho];
    int vetorB[tamanho];

    for (i = 0; i < tamanho; i++)
    {
        if (vetor[i] % 2 == 0)
        {
            vetorA[indp] = vetor[i];
            indp++;
        }
        else
        {
            vetorB[indi] = vetor[i];
            indi++;
        }
    }
    printf("\n\n");
    printf("Vetor Pares\n");
    printf("INDICE      VALOR\n");
    for (i = 0; i < indp; i++)
    {
        printf("%d            %d\n", i, vetorA[i]);
    }

    printf("\n\n");
    printf("Vetor Pares\n");
    printf("INDICE      VALOR\n");
    for (i = 0; i < indi; i++)
    {
        printf("%d            %d\n", i, vetorB[i]);
    }

    return 0;
}
