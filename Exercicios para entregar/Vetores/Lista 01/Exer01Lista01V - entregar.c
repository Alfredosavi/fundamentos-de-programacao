/* 1) Ler a altura de 5 pessoas, armazenar em um vetor. Validar para que seja informado um 
valor positivo para a altura.
Identificar e mostrar a maior altura e o índice do vetor que essa altura corresponde. 
Calcular a média das alturas acima de 1,50 e
mostrar essa média. Validar para que não seja realizada uma divisão por zero no cálculo da 
média. */
#include <stdio.h>

int main(void)
{
    int i;
    int aux;
    float vetoraltura[5];
    float media;
    int qtde = 0;
    float maior;
    float soma = 0;

    for (i = 0; i < 5; i++)
    {
        do
        {
            printf("Informe a altura da pessoa %d (em cm): ", i + 1);
            scanf("%f", &vetoraltura[i]);
        } while (vetoraltura[i] <= 0);
    }

    maior = vetoraltura[0];
    for (i = 0; i < 5; i++)
    {
        if (vetoraltura[i] > maior)
        {
            maior = vetoraltura[i];
            aux = i;
        }
        if (vetoraltura[i] > 1.50)
        {
            soma = soma + vetoraltura[i];
            qtde++;
        }
    }
    printf("A maior altura foi de %.2f e pertence ao INDICE %d do vetor.\n", maior, aux);
    if (qtde == 0)
    {
        printf("Impossivel fazer a media !!!\n");
    }
    else
    {
        media = soma / qtde;
        printf("A media foi de %.2f.\n", media);
    }

    return 0;
}
