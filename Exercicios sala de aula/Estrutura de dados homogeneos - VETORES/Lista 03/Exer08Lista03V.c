/* 8) Gerar um vetor A com 100 elementos. Criar um vetor B que conterá os valores do vetor A 
divididos pelo maior valor contido no vetor A.
Mostrar os dois vetores. */

#include <stdio.h>

void Gv(int vetor[], int tam, int limite);
int RetornaMaiorNumero(int vetor[], int tam);
void Pv(int vetor[], int tam);

int main(void)
{
    int i;
    int VetorA[100];
    float VetorB[100];
    Gv(VetorA, 100, 100);
    Pv(VetorA, 100);
    int maior;
    maior = RetornaMaiorNumero(VetorA, 100);
    printf("\n\n");
    for (i = 0; i < 100; i++)
    {
        VetorB[i] = VetorA[i] / (float)maior;
        printf("%.2f\t", VetorB[i]);
    }

    return 0;
}

// Gera vetor
void Gv(int vetor[], int tam, int limite)
{
    int i;
    srand(time(NULL));
    for (i = 0; i < tam; i++)
    {
        vetor[i] = rand() % (limite + 1);
    }
}

//Funcao que retorna o maior valor do intervalo
int RetornaMaiorNumero(int vetor[], int tam)
{
    int i;
    int maior;
    maior = vetor[0];
    for (i = 0; i < tam; i++)
    {
        if (vetor[i] > maior)
        {
            maior = vetor[i];
        }
    }
    return (maior);
}

// Printa vetor
void Pv(int vetor[], int tam)
{
    int i;
    for (i = 0; i < tam; i++)
    {
        printf("%d\t", vetor[i]);
    }
}
