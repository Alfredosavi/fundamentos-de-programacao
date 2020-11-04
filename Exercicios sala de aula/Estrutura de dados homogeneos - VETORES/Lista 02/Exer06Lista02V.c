/* 6) Gerar aleatoriamente 10 elementos para um vetor. Desse vetor, calcular e mostrar:
a) A soma de elementos armazenados nesse vetor que são inferiores a 100;
b) A quantidade de elementos armazenados nesse vetor que são iguais a 100;
c) A média dos elementos armazenados nesse vetor que são superiores a 100. Validar para não 
realizar uma divisão por zero. */
#include <stdio.h>

int main(void)
{
    int i;
    int VetorA[10];
    int soma = 0;
    int somaC = 0;
    int qtde = 0;
    int qtdeC = 0;
    float media;

    GVA(VetorA, 100);
    printf("Gerar aleatoriamente 10 elementos para um vetorA !!!\n\n");
    printf("INDICE     VALOR\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d           %d\n", i, VetorA[i]);
    }
    printf("\n\n");
    for (i = 0; i < 10; i++)
    {
        if (VetorA[i] <= 100)
        {
            soma = soma + VetorA[i];
        }
        if (VetorA == 100)
        {
            qtde++;
        }
        if (VetorA[i] > 100)
        {
            somaC = somaC + VetorA[i];
            qtdeC++;
        }
    }
    printf("A) A soma dos elementos armazenados no VetorA que são inferiores a 100 foi de: %d\n", soma);
    printf("B) A quantidade de elementos armazenados nesse vetor que são iguais a 100 foi de: %d\n", qtde);
    if (qtdeC != 0)
    {
        media = (float)somaC / qtdeC;
        printf("C) A media dos elementos armazenados nesse vetor que são superiores a 100 foi de %.2f\n", media);
    }
    else
    {
        printf("Impossivel fazer media !!!\n");
    }

    return 0;
}

//Gera vetor aleatorio
void GVA(int vet[], int lim)
{
    int i;
    srand(time(NULL));
    for (i = 0; i < 10; i++)
    {
        vet[i] = rand() % (lim + 1);
    }
}
