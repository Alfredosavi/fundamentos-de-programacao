/* 7) Em uma determinada cidade, sabe-se que, de janeiro a abril de um determinado ano (121 dias), 
a temperatura ficou entre a 5 e 45.
Gerar um vetor com valores randômicos nesse intervalo para esse período de tempo. Fazer uma 
função para gerar vetores de tamanho e com dentro de limites informados. A partir do vetor 
gerado, obtenha e mostre:
a) a menor temperatura ocorrida;
b) a maior temperatura ocorrida;
c) a temperatura média;
d) o número de dias em que a temperatura foi inferior à temperatura média. */
#include <stdio.h>

void FGVi(int vetor[], int tam, int Inf, int Sup);

int main(void)
{
    int i;
    int menor;
    int maior;
    int qtde = 0;
    int soma = 0;
    float media;
    int VetorA[121];
    FGVi(VetorA, 121, 5, 45);

    for (i = 0; i < 121; i++)
    {
        printf("%d\t", VetorA[i]);
    }

    menor = VetorA[0];
    maior = VetorA[0];
    for (i = 1; i < 121; i++)
    {
        soma = soma + VetorA[i];
        if (VetorA[i] < menor)
        {
            menor = VetorA[i];
        }
        if (VetorA[i] > maior)
        {
            maior = VetorA[i];
        }
    }
    printf("\n\n");
    printf("A) A menor temperatura foi de %d.\n", menor);
    printf("B) A maior temperatura foi de %d.\n", maior);
    media = (float)soma / 121;
    printf("C) A temperatura media foi de %.2f.\n", media);
    for (i = 0; i < 121; i++)
    {
        if (VetorA[i] < media)
        {
            qtde++;
        }
    }
    printf("D) O numero de dias que temperatura foi inferior que a media foi de %d.\n", qtde);

    return 0;
}

// Funcao para gerar vetor entre 5 e 45 randomicos
void FGVi(int vetor[], int tam, int Inf, int Sup)
{
    int i;
    srand(time(NULL));
    for (i = 0; i < tam; i++)
    {
        vetor[i] = rand() % (Sup - Inf + 1) + Inf;
    }
}
