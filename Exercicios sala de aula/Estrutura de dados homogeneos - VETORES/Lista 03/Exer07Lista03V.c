/* 7) Gerar um vetor de inteiros com 100 elementos, com valores entre -50 e +50. Fazer uma 
função para gerar um vetor com valores positivos e negativos em um intervalo. Em seguida, 
compactar o vetor, retirando os valores nulos e negativos. */
#include <stdio.h>

void FGV(int vetor[], int tam, int LimI, int LimS);
void PV(int vetor[], int tam);

int main(void)
{
    int i, j = 0;
    int vetor[100];
    FGV(vetor, 100, -50, 50);
    PV(vetor, 100);
    for (i = 0; i < 100; i++)
    {
        if (vetor[i] > 0)
        {
            vetor[j] = vetor[i];
            j++;
        }
    }
    printf("\n\n\n");
    PV(vetor, j);

    return 0;
}

void FGV(int vetor[], int tam, int LimI, int LimS)
{
    int i;
    srand(time(NULL));
    for (i = 0; i < tam; i++)
    {
        vetor[i] = rand() % (LimS - LimI + 1) + LimI;
    }
}

// Printa vetor
void PV(int vetor[], int tam)
{
    int i;
    for (i = 0; i < tam; i++)
    {
        printf("%d\t", vetor[i]);
    }
}
