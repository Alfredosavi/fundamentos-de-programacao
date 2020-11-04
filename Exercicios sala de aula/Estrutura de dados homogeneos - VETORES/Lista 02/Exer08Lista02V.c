/* 8) Gerar aleatoriamente um vetor com 100 elementos que conterá somente valores 0 ou 1. 
Mostrar esse vetor.
Em seguida contar quantos 0s sucessivos o vetor contém, armazenar essa quantidade em outro vetor 
e mostrá-lo.
Qual seria o tamanho mínimo e máximo desse vetor que armazena as quantidades? Criá-lo para
a tamanho máximo possível.
Exemplo
Vetorgerado: 00010011111000
VetorQuatidades:323 (os três primeiros zeros,nos dois zeros subsequentes e os três zeros no final) */
#include <stdio.h>
void VetorBinario(int vetor[], int tam, int limiteSup, int limiteInf);

int main(void)
{
    int i, j = 0;
    int VetorA[100];
    int VetorC[50];
    int qtde = 0;
    int aux = 0;

    //Gera vetor binario e mostra ele.
    VetorBinario(VetorA, 100, 1, 0);
    for (i = 0; i < 50; i++)
    {
        printf("%d", VetorA[i]);
    }

    //Processamento
    for (i = 0; i < 100; i++)
    {
        if (VetorA[i] == 0)
        {
            qtde++;
        }
        else // quando o elemento do vetorA for diferente de 0;
        {
            if (qtde != 0)
            {
                VetorC[j] = qtde;
                aux++;
                qtde = 0;
                j++;
            }
        }
    }
    printf("\n\n");
    printf("VETOR C:\n");
    for (i = 0; i < aux; i++)
    {
        printf("%d ", VetorC[i]);
    }
    printf("\nTamanho do VetorC = %d\n", aux);

    return 0;
}

//Funcao que cria vetor binario
void VetorBinario(int vetor[], int tam, int limiteSup, int limiteInf)
{
    int i;
    srand(time(NULL));
    for (i = 0; i < tam; i++)
    {
        vetor[i] = rand() % (limiteSup - limiteInf + 1) + limiteInf;
    }
}
