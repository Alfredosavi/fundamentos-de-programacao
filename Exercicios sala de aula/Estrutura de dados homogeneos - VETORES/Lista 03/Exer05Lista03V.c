/* 5) Gerar randomicamente um vetor com 100 caracteres. Mostrar o vetor gerado em colunas com 
15 caracteres por linha, separados por um espaço.
A instrução para gerar randomicamente caracteres alfabéticos minúsculos é:
char A[101]; //Por que 101 para armazenar 100 caracteres?
A[Indice] = rand() % 26 + 97; //Por que essa fórmula?
Na função gerada não esquecer de finalizar o vetor.
Faça:
for(i=0;i<255;i++)
{
       printf("%d-%c\n",i,i);
}
E veja código e o caractere correspondente da tabela ASCII. */
#include <stdio.h>

void GeraVetorAlea(char vetor[], int tam);

int main(void)
{
    int i;
    char vetorA[100];
    GeraVetorAlea(vetorA, 100);
    for (i = 0; i < 101; i++)
    {
        printf("%c\t", vetorA[i]);
    }

    return 0;
}

//Funcao que gera vetor aleatorio
void GeraVetorAlea(char vetor[], int tam)
{
    int i;
    srand(time(NULL));
    for (i = 0; i < tam; i++)
    {
        vetor[i] = rand() % 26 + 97;
    }
}
