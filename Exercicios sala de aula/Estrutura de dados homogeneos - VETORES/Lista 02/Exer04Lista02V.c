/* 4) Gerar aleatoriamente 10 elementos para um vetor A e construir um vetor B de mesma 
dimensão com os mesmos elementos de A, mas em ordem invertida, ou seja, o primeiro elemento 
de A será o último de B, o segundo elemento de A será o penúltimo de B e assim sucessivamente.
Represente a solução. */
#include <stdio.h>

void GeraVetor(int vetor[], int limite);

int main(void)
{
    int i;
    int VetorA[10];
    int VetorB[10];
    GeraVetor(VetorA, 100);
    printf("Gerar Aleatoriamente 10 elementos para um vetor A.\n\n");
    printf("INDICE      VALOR\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d            %d\n", i, VetorA[i]);
    }
    printf("\n\n");
    printf("Construir um vetor B de mesmo tamanho mas em ordem invertida em relaçao ao VetorA\n\n");
    printf("INDICE      VALOR\n");
    for (i = 0; i < 10; i++)
    {
        VetorB[i] = VetorA[(9 - i)];
        printf("%d            %d\n", i, VetorB[i]);
    }

    return 0;
}

// Gerar vetor com 10 elementos aleatorios.
void GeraVetor(int vetor[], int limite)
{
    int i;
    srand(time(NULL));
    for (i = 0; i < 10; i++)
    {
        vetor[i] = rand() % (limite + 1);
    }
}
