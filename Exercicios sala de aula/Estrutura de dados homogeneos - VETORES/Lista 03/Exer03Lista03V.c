/* 3) Gerar um vetor com cinco números aleatórios no intervalo entre 10 e 20, inclusive. 
Para cada número exibir a sequência dos pares de 2 até o número gerado e a soma desses pares.
Utilizar função uma para mostrar pares e outra função que retorna a quantidade de pares. 
Mostrar como na figura ao lado. */
#include <stdio.h>

int main(void)
{
    int i;
    int vetorA[5];
    GVACL(vetorA, 5, 20, 10);
    for (i = 0; i < 5; i++)
    {
        printf("%d ===> ", vetorA[i]);
        PDP(vetorA, 5, i);
        CSP(vetorA, 5);
        printf("\n");
    }

    return 0;
}

//Funcao para gerar vetor aleatorio
void GVACL(int vetor[], int tam, int limS, int limI)
{
    int i;
    srand(time(NULL));
    for (i = 0; i < tam; i++)
    {
        vetor[i] = rand() % (limS - limI + 1) + limI;
    }
}

//Funcao para pegar divisores pares
void PDP(int vet[], int tam, int i)
{
    int j;
    for (j = 2; j <= vet[i]; j = j + 2)
    {
        if (vet[i] % 2 == 0)
        {
            if (vet[i] == j)
            {
                printf("%d.", j);
            }
            else
            {
                printf("%d, ", j);
            }
        }
    }
}
// Funcao para calcular a soma dos pares
void CSP(int vet[], int tam)
{
    int i, j;
    int qtde = 0;
    for (i = 0; i < tam; i++)
    {
        for (j = 2; j < vet[i]; j = j + 2)
        {
            if (vet[i] % 2 == 0)
            {
                qtde = qtde + j;
            }
        }
    }
    return (qtde);
}
