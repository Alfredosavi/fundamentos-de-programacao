/*9) Uma locadora de vídeos armazena em um vetor de 500 posições, a quantidade de filmes 
retirados por seus clientes durante o ano.
A locadora está fazendo uma promoção e para cada 10 filmes retirados, o cliente tem direito a 
uma locação grátis.
Faça um algoritmo que crie outro vetor contendo a quantidade de locações gratuitas a que cada 
cliente tem direito. */
#include <stdio.h>

void FGVA(int vetor[], int tam, int limite);
void IV(int vetor[], int tam, int limite);

int main(void)
{
    int qtde = 0;
    int i;
    int vetorA[500];
    int vetorB[500];
    FGVA(vetorA, 500, 100);
    IV(vetorA, 500, 100);
    printf("\n\n");
    for (i = 0; i < 500; i++)
    {
        qtde = vetorA[i] / 10;
        vetorB[i] = qtde;
        printf("%d\t", vetorB[i]);
    }

    return 0;
}

//Funcao para gerar vetor aleatorio
void FGVA(int vetor[], int tam, int limite)
{
    int i;
    srand(time(NULL));
    for (i = 0; i < tam; i++)
    {
        vetor[i] = rand() % (limite + 1);
    }
}

//Funcao que imprimi vetor
void IV(int vetor[], int tam, int limite)
{
    int i;
    for (i = 0; i < tam; i++)
    {
        printf("%d\t", vetor[i]);
    }
}
