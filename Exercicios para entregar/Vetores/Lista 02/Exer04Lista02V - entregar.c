/* 4) O que faz o algoritmo a seguir:
declare vetA[30], vetB[30], i, j como inteiro

repetir i = 0, até i < 30, passo 1
	leia vetA[i]
fim-repetir

repetir i = 0, até i < 30, passo 1
	escreva vetA[i]
fim-repetir

j=0;
repetir i = 0, até i < 30, passo 1
	se ( vetA[i] % 2 == 0 ) then
		vetB[j] ← vetA[i]
	fim-se
fim-repetir

repetir i = 0, até i < j, passo 1
	escreva vetB[j]
fim-repetir
	Implemente uma solução na linguagem C para esse algoritmo. A entrada de dados deve ser 
    gerada por um função e a apresentação do conteúdo do vetor também. */
#include <stdio.h>

void FGUVA(int vetor[], int tam, int limite);
void FMVA(int vet[], int tam);

int main(void)
{
    int vetA[30], vetB[30];
    int i, j = 0;

    FGUVA(vetA, 30, 100);
    printf("VetA:\n\n");
    FMVA(vetA, 30);

    for (i = 0; i < 30; i++)
    {
        if (vetA[i] % 2 == 0)
        {
            vetB[j] = vetA[i];
            j++;
        }
    }
    printf("\n\n");
    printf("VetB:\n\n");
    for (i = 0; i < j; i++)
    {
        printf("%d\t", vetB[i]);
    }

    return 0;
}

// funcao que gera um vetor aleatorio
void FGUVA(int vetor[], int tam, int limite)
{
    int i;
    srand(time(NULL));
    for (i = 0; i < tam; i++)
    {
        vetor[i] = rand() % (limite + 1);
    }
}

// Funcao que mostra um vetor aleatorio
void FMVA(int vet[], int tam)
{
    int i;
    for (i = 0; i < tam; i++)
    {
        printf("%d\t", vet[i]);
    }
}
