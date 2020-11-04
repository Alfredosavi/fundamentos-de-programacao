/* 10) O que faz o algoritmo a seguir:
declare vet[80], i como inteiro
repetir i = 0, até i < 80, passo 1
	leia vet[i]
fim-repetir
menor ← vet[0]
posicaomenor ← 0

repetir i = 0, até i < 80, passo 1
	se ( vet[i] < menor ) then
		menor ← vet(i)
		posicaomenor ← i
	fim-se
fim-repetir
escreva ‘menor = ’, menor, ‘na posicao =’, posicaomenor
	Implemente uma solução na linguagem C para esse algoritmo. Deve ser utilizadas funções para 
    gerar e mostrar o  vetor e fazer a funcionalidade do exercicio. */
#include <stdio.h>

void GeraVetorAleatorio(int vetor[], int limite, int tamanho);

int main(void)
{
    int vet[80];
    int i;
    int menor, posicaomenor;
    GeraVetorAleatorio(vet, 100, 80);

    menor = vet[0];
    posicaomenor = 0;

    for (i = 0; i < 80; i++)
    {
        printf("%d\t", vet[i]);
        if (vet[i] < menor)
        {
            menor = vet[i];
            posicaomenor = i;
        }
    }
    printf("Menor: %d\nPosicao Menor: %d\n", menor, posicaomenor);

    return 0;
}

//Gera vetor aleatorio
void GeraVetorAleatorio(int vetor[], int limite, int tamanho)
{
    int i;
    srand(time(NULL));
    for (i = 0; i < tamanho; i++)
    {
        vetor[i] = rand() % (limite + 1);
    }
}
