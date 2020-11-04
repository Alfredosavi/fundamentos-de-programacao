/* 6) Gerar randomicamente um vetor com 200 caracteres alfanuméricos (números, letras e 
símbolos especiais, exceto caracteres de controle).
Mostrar o vetor gerado em colunas com 12 caracteres por linha separados por um espaço. 
Percorrer o vetor e contar quantos caracteres são letras, quantos são números e quantos outros 
caracteres. Armazenar essas quantidades em um vetor. Esse vetor possui tamanho 3 e cada índice 
armazena um desses tipos (letras, números, outros). é indispensável ir armazenando as 
quantidades é medida que o vetor é percorrido (vet[0]=vet[0]+1).
Portanto, é necessário inicializar com zero o vetor numérico antes de utilizá-lo. 
Mostrar o vetor com as quantidades. */
#include <stdio.h>

int main(void)
{
    char vetorA[200];
    int letra = 0, numeros = 0, demais = 0;
    int vetorB[3] = {0, 0, 0};
    GeraVetor(vetorA, 200);
    int i;
    for (i = 0; i < 200; i++)
    {
        printf("%c\t", vetorA[i]);
    }
    for (i = 0; i < 200; i++)
    {
        if ((vetorA[i] >= 65 && vetorA[i] <= 90) || (vetorA[i] >= 97 && vetorA[i] <= 122) || (vetorA[i] >= 128 && vetorA[i] <= 167))
        {
            vetorB[0] = vetorB[0] + 1;
        }
        else if (vetorA[i] >= 48 && vetorA[i] <= 57)
        {
            vetorB[1] = vetorB[1] + 1;
        }
        else
        {
            vetorB[2] = vetorB[2] + 1;
        }
    }
    printf("\n\n");
    printf("Letras => %d\nNumeros => %d\nSimbolos => %d\n", vetorB[0], vetorB[1], vetorB[2]);

    return 0;
}

void GeraVetor(char vetor[], int tam)
{
    int i;
    srand(time(NULL));
    for (i = 0; i < tam; i++)
    {
        do
        {
            vetor[i] = rand() % 222 + 33;
        } while (vetor[i] == 127);
    }
}
