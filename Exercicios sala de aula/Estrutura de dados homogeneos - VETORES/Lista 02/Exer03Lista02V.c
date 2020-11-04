/* 3) Gerar aleatoriamente 7 elementos para um vetor A. Construir um vetor B de mesmo tamanho, 
sendo que cada elemento de B deverá ser o elemento de A correspondente multiplicado por sua 
posição (ou índice), ou seja, B[i] = A[i] * i. Represente a solução. */
#include <stdio.h>

void GeraVetorAleatorio(int vetor[], int limite);

int main(void)
{
    int i;
    int VetorA[7];
    GeraVetorAleatorio(VetorA, 100);
    int VetorB[7];
    printf("Gerar Aleatoriamente 7 elementos para um vetor A.\n\n");
    printf("INDICE      VALOR\n");
    for (i = 0; i < 8; i++)
    {
        printf("%d            %d\n", i, VetorA[i]);
    }
    printf("\n\n");
    printf("Construir um vetor B de mesma tamanho, sendo que cada elemento de B\ndevera ser o elemento de A correspondete mult. por seu indice.\n\n");
    printf("INDICE      VALOR\n");
    for (i = 0; i < 8; i++)
    {
        VetorB[i] = VetorA[i] * i;
        printf("%d            %d\n", i, VetorB[i]);
    }

    return 0;
}

// Funcao que gera um vetor de 7 elementos aleatorio.
void GeraVetorAleatorio(int vetor[], int limite)
{
    int i;
    srand(time(NULL));
    for (i = 0; i < 7; i++)
    {
        vetor[i] = rand() % (limite + 1);
    }
}
