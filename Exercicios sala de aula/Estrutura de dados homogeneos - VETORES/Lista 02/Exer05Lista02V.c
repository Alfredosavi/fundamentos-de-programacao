/* 5) Gerar aleatoriamente dois vetores A e B com n elementos. O usuário informa a quantidade 
de elementos dos vetores, ou seja, o seu tamanho.
Validar para que seja informado um valor positivo para a quantidade de elementos. Mostrar os 
elementos desses vetores. Construir um vetor C, em que cada elemento de C será 1, quando o 
elemento de A for maior que o respectivo elemento em B; 0, quando o elemento de A for igual ao 
respectivo elemento em B; e -1 quando o elemento de A for menor que o respectivo elemento em B. 
Mostrar os elementos desse vetor C. */
// RESUMO: 1 => A > B  |  0 => A = B  |  -1 => A < B |
#include <stdio.h>

void VetorAleatorio(int vetor[], int tam, int limite);

int main(void)
{
    int tamA;
    int i;
    int maior, menor;

    do
    {
        printf("Informe o tamanho do seu Vetor A: ");
        scanf("%d", &tamA);
    } while (tamA <= 0);
    int VetorA[tamA];
    VetorAleatorio(VetorA, tamA, 100);

    int VetorB[tamA];
    VetorAleatorio(VetorB, tamA, 101);

    printf("\nVETOR A:\n\n");
    printf("INDICE     VALOR\n");
    for (i = 0; i < tamA; i++)
    {
        printf("%d           %d\n", i, VetorA[i]);
    }
    printf("\n\n\n");
    printf("\nVETOR B:\n\n");
    printf("INDICE     VALOR\n");

    for (i = 0; i < tamA; i++)
    {
        printf("%d           %d\n", i, VetorB[i]);
    }

    int VetorC[tamA];

    for (i = 0; i < tamA; i++)
    {
        if (VetorA[i] > VetorB[i])
        {
            VetorC[i] = 1;
        }
        else if (VetorA[i] < VetorB[i])
        {
            VetorC[i] = -1;
        }
        else
        {
            VetorC[i] = 0;
        }
    }
    printf("\n\n\n");
    printf("\nVETOR C:\n\n");
    printf("INDICE     VALOR\n");

    for (i = 0; i < tamA; i++)
    {
        printf("%d           %d\n", i, VetorC[i]);
    }

    return 0;
}

//Funcao que cria vetor aleatorio.
void VetorAleatorio(int vetor[], int tam, int limite)
{
    int i;
    srand(time(NULL));
    for (i = 0; i < tam; i++)
    {
        vetor[i] = rand() % (limite + 1);
    }
}
