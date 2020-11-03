/* 1) Gerar um vetor com 10 valores inteiros aleatórios entre o e 999. Para os elementos de 
índice par, verificar se perfeito. Para os elementos de índice ímpar, somar os seus dígitos. 
Utilizar funções para verificar se um número é perfeito e para somar os seus dígitos. 
Um número é perfeito quando a soma dos seus divisores (exceto ele próprio) é igual ao próprio 
número (por exemplo 6 é perfeito porque possui 1, 2 e 3 como divisores que somam 6).
Mostrar da seguinte forma:
Perfeitos:
Vet[0] = 6 é perfeito
Vet[2] = 10 não é perfeito
...
Soma dos dígitos
Vet[1] = 134 soma dos dígitos: 8
Vet[3] = 127 soma dos dígitos 10 */
#include <stdio.h>
#include <time.h>

void FGVA(int vetor[], int tam, int limite);
char VP(int num);
void FI(int num);

int main(void)
{
	int i;
	int vetorA[10];
	FGVA(vetorA, 10, 999);
	printf("Perfeitos:\n");
	for (i = 0; i < 10; i = i + 2)
	{
		if (VP(vetorA[i]) == 'p')
		{
			printf("Vetor[%d] = %d\n", i, vetorA[i]);
		}
	}
	printf("\n\n\n");
	printf("Soma dos digitos:\n");
	for (i = 1; i < 10; i = i + 2)
	{
		printf("Vetor[%d] => %d  ", i, vetorA[i]);
		FI(vetorA[i]);
		printf("\n");
	}

	return 0;
}

// Funcao que gera vetor aleatorio
void FGVA(int vetor[], int tam, int limite)
{
	int i;
	srand(time(NULL));
	for (i = 0; i < tam; i++)
	{
		vetor[i] = rand() % (limite + 1);
	}
}

// Funcao que verifica par
char VP(int num)
{
	int j;
	int soma = 0;
	for (j = 1; j <= num / 2; j++)
	{
		if (num % j == 0)
		{
			soma = soma + j;
		}
	}
	if (soma == num)
	{
		return ('p');
	}
	else
	{
		return ('n');
	}
}

// Funcao que verifica impar
void FI(int num)
{
	int u;
	int d;
	int c;
	int soma;

	c = num / 100;
	d = num % 100 / 10;
	u = num % 10;
	soma = c + d + u;
	printf("Soma = %d.\n", soma);
}
