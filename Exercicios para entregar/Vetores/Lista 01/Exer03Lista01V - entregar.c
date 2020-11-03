/* 3) Gerar um vetor com 50 elementos (valores aleatórios), com valor até 100. Armazenar em 
um vetor os números pares e em outro os números
ímpares. Mostrar os três vetores.
Dica: declarar os três vetores com tamanho 50, na pior hipótese todos os números gerados 
seriam pares ou ímpares.
Uma solução mais otimizada: primeiro percorrer o vetor e contar quantos valores há de cada 
tipo e em seguida declarar os vetores com o tamanho exato, obtido da contagem. */
#include <stdio.h>

void FGEA(int vetor[], int tam, int limite);

int main(void)
{
    int i;
    int vetorA[50];
    int vetorB[50];
    int vetorC[50];
    int p = 0, im = 0;
    FGEA(vetorA, 50, 100);
    printf("VetorA:\n\n");
    for (i = 0; i < 50; i++)
    {
        printf("%d\t", vetorA[i]);
    }

    for (i = 0; i < 50; i++)
    {
        if (vetorA[i] % 2 == 0)
        {
            vetorB[p] = vetorA[i];
            p++;
        }

        else
        {
            vetorC[im] = vetorA[i];
            im++;
        }
    }
    printf("\n");
    printf("VetorB:\n\n");
    for (i = 0; i < p; i++)
    {
        printf("%d\t", vetorB[i]);
    }
    printf("\n\n");
    printf("VetorC:\n\n");
    for (i = 0; i < im; i++)
    {
        printf("%d\t", vetorC[i]);
    }

    return 0;
}

void FGEA(int vetor[], int tam, int limite)
{
    int j;
    srand(time(NULL));
    for (j = 0; j < tam; j++)
    {
        vetor[j] = rand() % (limite + 1);
    }
}
