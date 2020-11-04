/* 2) Gerar um arquivo de cabeçalho com uma função para gerar um vetor com números aleatórios, 
com determinado tamanho e em uma determinada faixa de valores e com outra função para mostrar um 
vetor com tamanho não fixo.
Utilizar essas funções para gerar um vetor de valores randômicos com a quantidade de elementos 
informada pelo usuário.
Validar a entrada para que seja informado um valor positivo para o tamanho do vetor. Mostrar o vetor.
Encontrar o menor entre os elementos gerados e armazenados no vetor e fazer a média dos pares que 
estão no vetor.
Validar para que não seja realizada divisão por zero no cálculo da média. */
#include <stdio.h>

void gerarValoresVetoresInt(int vet[], int tam, int limite);

int main(void)
{
    int tamanho;
    int i;
    int maior, menor;
    int qtde = 0;
    int soma = 0;
    float media;

    do
    {
        printf("Informe o tamanho do vetor: ");
        scanf("%d", &tamanho);
    } while (tamanho <= 0);

    int vetor[tamanho];
    gerarValoresVetoresInt(vetor, tamanho, 50);
    MostraVetorInt(vetor, tamanho);

    printf("\nPares\n");
    for (i = 0; i < tamanho; i++)
    {
        if (vetor[i] % 2 == 0)
        {
            soma = soma + vetor[i];
            qtde++;
            printf("%d\t", vetor[i]);
        }
    }
    if (qtde > 0)
    {
        printf("\n");
        media = (float)soma / qtde;
        printf("A media dos pares foi de: %.2f\n", media);
    }

    return 0;
}

void gerarValoresVetoresInt(int vet[], int tam, int limite)
{
    int i;
    srand(time(NULL));
    for (i = 0; i < tam; i++)
    {
        vet[i] = rand() % (limite + 1);
    }
}