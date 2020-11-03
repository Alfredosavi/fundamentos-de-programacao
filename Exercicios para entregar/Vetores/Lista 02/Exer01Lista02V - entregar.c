/* 1) Gerar um vetor com 100 elementos entre 10 e 400, inclusive, mostrar o vetor gerado. 
Em seguida percorrer o vetor e contar quantos elementos estão entre 10 e 100, quantos estão 
entre 101 e 200, quantos estão entre 201 e 300 e quantos estão entre 301 e 400. A quantidade 
será armazenada em outro vetor com tamanho 4, para cada uma das respectivas quantidades. 
Por exemplo, VetQuantidades[0] conterá a quantidade de valores entre 10 e 100 no vetor de origem.
Obs.: É indispensável que os valores sejam contados á medida que o vetor é percorrido, 
por exemplo, VetQuantidade[0]  = VetQuantidade[0]  + 1. */
#include <stdio.h>

void GVA(int vetor[], int limS, int limI, int tam);
void MV(int tam, int vetor[]);

int main(void)
{
    int i;
    int vetorA[100];
    int vetorB[4] = {0, 0, 0, 0};
    GVA(vetorA, 400, 10, 100);
    printf("VetorA:\n\n");
    MV(100, vetorA);
    printf("\n\n");
    for (i = 0; i < 100; i++)
    {
        if (vetorA[i] > 10 && vetorA[i] < 100)
        {
            vetorB[0] = vetorB[0] + 1;
        }
        else if (vetorA[i] > 101 && vetorA[i] < 200)
        {
            vetorB[1] = vetorB[1] + 1;
        }
        else if (vetorA[i] > 201 && vetorA[i] < 300)
        {
            vetorB[2] = vetorB[2] + 1;
        }
        else
        {
            vetorB[3] = vetorB[3] + 1;
        }
    }
    printf("10-100       101-200         201-300          301-400\n\n");
    for (i = 0; i < 4; i++)
    {
        printf("%d       \t", vetorB[i]);
    }

    return 0;
}

void GVA(int vetor[], int limS, int limI, int tam)
{
    int i;
    srand(time(NULL));
    for (i = 0; i < tam; i++)
    {
        vetor[i] = rand() % (limS - limI + 1) + limI;
    }
}

void MV(int tam, int vetor[])
{
    int i;
    for (i = 0; i < tam; i++)
    {
        printf("%d\t", vetor[i]);
    }
}
