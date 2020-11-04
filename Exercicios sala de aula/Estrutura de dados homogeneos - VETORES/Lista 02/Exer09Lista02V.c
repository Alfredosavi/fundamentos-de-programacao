/* 9) O que faz o algoritmo a seguir:
declare a[50], i, soma como inteiro
declare media como real
soma ← 0

repetir i = 0, até i< 50, passo 1
	leia a[i]
fim-repetir

repetir i = 0, até i< 50, passo 1
	soma ← soma + a[i]
fim-repetir

repetir i = 0, até i < 50, passo 1
	escreva a[i]
fim-repetir

media ← soma / 50
escreva media
	Implemente uma solução na linguagem C para esse algoritmo. Devem ser utilizadas funções para 
    gerar o vetor, somar e mostrar os elementos do vetor. */
#include <stdio.h>

void GeraVetorAleatorio(int vetor[], int limite, int tamanho);

int main(void)
{
    int a[50];
    int i, soma = 0;
    float media;

    GeraVetorAleatorio(a, 100, 50);
    for (i = 0; i < 50; i++)
    {
        printf("%d\t", a[i]);
        soma = soma + a[i];
    }
    printf("\n\n");

    media = (float)soma / 50;
    printf("Media: %.2f\n", media);

    return 0;
}

// Funcao para gerar vetor aleatorio
void GeraVetorAleatorio(int vetor[], int limite, int tamanho)
{
    int i;
    srand(time(NULL));
    for (i = 0; i < tamanho; i++)
    {
        vetor[i] = rand() % (limite + 1);
    }
}
