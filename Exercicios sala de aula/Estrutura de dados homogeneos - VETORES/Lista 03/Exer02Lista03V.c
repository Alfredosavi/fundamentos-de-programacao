/* 2) Gerar aleatoriamente um vetor com 11 elementos entre 10 e 20. Em seguida ordenar o vetor.
Percorrer o vetor ordenado e mostrar a quantidade de divisores de cada um dos valores armazenados.
Utilizar uma função para mostrar os divisores e outra para contar a quantidade.
Ao final mostrar o número que possui a maior quantidade de divisores e a respectiva quantidade.
A figura ao lado exemplifica a execução do programa, utilizá-la como modelo de saída.
Esse exercício deve ser feito com funções para: criar vetor, ordenar vetor, mostrar vetor, 
contar divisores e mostrar divisores. */
#include <stdio.h>

int main(void)
{
    int vetor[11];
    printf("Objetivo: Gerar um vetor aleatorio com 11 elementos entre 10 e 20:\n * Ordenar o vetor\n * Percorrer o vetor e mostrar qtde divisores\n");
    printf("\n\n");
    printf("VETOR A     DIVISORES\n");
    GVA(vetor, 11, 20, 10);
    OVA(vetor, 11);
    MD(vetor, 11);
    CD(vetor, 11);

    return 0;
}

//GVA
void GVA(int vet[], int tam, int limsup, int liminf)
{
    int i;
    srand(time(NULL));
    for (i = 0; i < tam; i++)
    {
        vet[i] = rand() % (limsup - liminf + 1) + liminf;
    }
}

// OVA
void OVA(int vetor[], int tam)
{
    int i, j, aux;
    for (i = 0; i < tam; i++)
    {
        for (j = i + 1; j < tam; j++)
        {
            if (vetor[i] > vetor[j])
            {
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }
}

//CD
void CD(int vetor[], int tam)
{
    int i, j;
    int aux;
    int numero = 0, qtde;
    int aux2;

    for (i = 0; i < tam; i++)
    {
        qtde = 0;
        for (j = 1; j <= vetor[i]; j++)
        {
            if (vetor[i] % j == 0)
            {
                qtde++;
                aux = vetor[i];
            }
        }
        if (qtde > numero)
        {
            numero = qtde;
            aux2 = aux;
        }
    }
    printf("O numero com maior divisor foi o %d com %d divisores.\n\n", aux2, numero);
}

// MD
void MD(int vet[], int tam)
{
    int i, j;
    for (i = 0; i < tam; i++)
    {
        printf("%d    =>    ", vet[i]);
        for (j = 1; j <= vet[i]; j++)
        {
            if (vet[i] % j == 0)
            {
                if (j == vet[i])
                {
                    printf("%d.", j);
                }
                else
                {
                    printf("%d, ", j);
                }
            }
        }
        printf("\n");
    }
}
