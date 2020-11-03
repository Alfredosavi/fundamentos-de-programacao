/* 2) Gerar um vetor aleatório com 10 elementos entre 0 e 100.  Verificar se cada um dos 
elementos armazenados no vetor é primo. Mostrar da seguinte forma:
Vet[0] = 10 não é primo;
Vet[1] = 7 é primo;
Vet[2] = 30 não é primo;
 Utilizar, obrigatoriamente, uma função para verificar se o número é primo. Essa função 
 retorna 0 para indicar que o número e primo e 1 para indicar que não é primo. 
 Tratar esse retorno na função chamadora. */
#include <stdio.h>

void GUVA(int vetor[], int tam, int LimI, int LimS);
int CP(int valor);
void IV(int vetor[], int tam);

int main(void)
{
    int i;
    int VetorA[10];
    GUVA(VetorA, 10, 0, 100);
    printf("VetorA:\n\n");
    IV(VetorA, 10);
    printf("\n\n");
    for (i = 0; i < 10; i++)
    {
        printf("VetorA[%d] = %d ", i, VetorA[i]);
        if (CP(VetorA[i]) == 0)
        {
            printf("PRIMO\n");
        }
        else
        {
            printf("nao PRIMO\n");
        }
    }

    return 0;
}

void GUVA(int vetor[], int tam, int LimI, int LimS)
{
    int i;
    srand(time(NULL));
    for (i = 0; i < tam; i++)
    {
        vetor[i] = rand() % (LimS - LimI + 1) + LimI;
    }
}

// FUNCAO QUE CALCULA PRIMO (RETORNA 1 PARA N PRIMO E 0 PARA PRIMO)
int CP(int valor)
{
    int i;
    for (i = 2; i <= valor / 2; i++)
    {
        if (valor % i == 0)
        {
            return (1); // para n primo
        }
    }
    if (valor == 0 || valor == 1)
    {
        return (1);
    }
    return (0); // para primo
}

void IV(int vetor[], int tam)
{
    int i;
    for (i = 0; i < tam; i++)
    {
        printf("%d\t", vetor[i]);
    }
}
