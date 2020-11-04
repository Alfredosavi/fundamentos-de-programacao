/* 1) Criar uma função para ordenar os elementos de um vetor de tamanho 'n'. */
#include <stdio.h>

void GVA(int vet[], int tam, int lim);

int main(void)
{
    int i, j;
    int tam;
    int aux;
    printf("Informe o tamanho do vetor: ");
    scanf("%d", &tam);
    int vetorA[tam];
    GVA(vetorA, tam, 100);
    printf("Vetor Aleatorio:\n\n");
    for (i = 0; i < tam; i++)
    {
        printf("%d\t", vetorA[i]);
    }
    printf("\n\n");
    for (i = 0; i < tam; i++)
    {
        for (j = i + 1; j < tam; j++)
        {
            if (vetorA[i] > vetorA[j])
            {
                aux = vetorA[i];
                vetorA[i] = vetorA[j];
                vetorA[j] = aux;
            }
        }
    }
    printf("Vetor Ordenado:\n\n");
    for (i = 0; i < tam; i++)
    {
        printf("%d\t", vetorA[i]);
    }

    return 0;
}

//Funcao GVA
void GVA(int vet[], int tam, int lim)
{
    int i;
    srand(time(NULL));
    for (i = 0; i < tam; i++)
    {
        vet[i] = rand() % (lim + 1);
    }
}
