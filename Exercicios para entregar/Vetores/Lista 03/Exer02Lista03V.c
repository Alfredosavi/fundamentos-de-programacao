/* 2) Gerar um vetor com 10 valores entre 10 e 2000. Utilizando uma função que verifica se um 
número é primo, armazenar em outro vetor somente os números que estão no vetor gerado e que são 
primos. Mostrar os dois vetores utilizando função. */
#include <stdio.h>

void VA(int vetor[], int tam, int limS, int limI);
void PV(int vetor[], int tam);
char primo(int num);

int main(void)
{
	int i;
	int cont = 0;
	int vetorA[10];
	int vetorB[10];
	VA(vetorA, 10, 2000, 10);
	printf("Vetor A:\n");
	PV(vetorA, 10);
	for (i = 0; i < 10; i++)
	{
		if (primo(vetorA[i]) == 'p')
		{
			vetorB[cont] = vetorA[i];
			cont++;
		}
	}
	printf("\n\n\n");
	printf("Vetor Primos:\n");
	PV(vetorB, cont);

	return 0;
}

// Funcao que gera vetor aleatorio
void VA(int vetor[], int tam, int limS, int limI)
{
	int i;
	srand(time(NULL));
	for (i = 0; i < tam; i++)
	{
		vetor[i] = rand() % (limS - limI + 1) + limI;
	}
}

// Funcao que printa vetor
void PV(int vetor[], int tam)
{
	int i;
	for (i = 0; i < tam; i++)
	{
		printf("%d\t", vetor[i]);
	}
}

// Funcao para verificar primo
char primo(int num)
{
	int i;
	for (i = 2; i <= num / 2; i++)
	{
		if (num % i == 0)
		{
			return ('n');
		}
	}
	return ('p');
}