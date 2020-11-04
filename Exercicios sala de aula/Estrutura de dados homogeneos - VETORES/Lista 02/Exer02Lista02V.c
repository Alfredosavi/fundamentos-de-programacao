/* 2) Gerar aleatoriamente 8 elementos para um vetor A. Construir um vetor B de mesma dimensão 
com os elementos de A multiplicados por 2. Represente a solução. */
#include <stdio.h>

void GeraValorAleatorio(int vetor[], int limite);

int main(void)
{
    char repete;
    int i;
    do
    {
        system("cls");
        int vetorA[8];
        int vetorB[8] = {1, 1, 1, 1, 1, 1, 1, 1};
        GeraValorAleatorio(vetorA, 100);
        printf("Gerar Aleatoriamente 8 elementos para um vetor A.\n\n");
        printf("INDICE      VALOR\n");
        for (i = 0; i < 8; i++)
        {
            printf("%d            %d\n", i, vetorA[i]);
        }
        printf("\n\n");
        printf("Construir um vetor B de mesma dimensao com os elementos de A mult por 2.\n\n");
        printf("INDICE      VALOR\n");
        for (i = 0; i < 8; i++)
        {
            vetorB[i] = vetorA[i] * 2;
            printf("%d            %d\n", i, vetorB[i]);
        }
        printf("Deseja repetir o programa (S/s para sim): ");
        fflush(stdin);
        scanf("%c", &repete);
    } while (repete == 'S' || repete == 's');

    return 0;
}

// Funcao para gerar vetor aleatorio.
void GeraValorAleatorio(int vetor[], int limite)
{
    int i;
    srand(time(NULL));
    for (i = 0; i < 8; i++)
    {
        vetor[i] = rand() % (limite + 1);
    }
}
