/* 4) Gerar aleatoriamente dois vetores com 10 elementos menores que 100 do tipo float. 
Os valores devem ser float aleatório, isto é, não deve ser utilizado um divisor fixo 
(por exemplo, rand() % 101 / 0.123). Criar outros dois vetores numéricos, em um deles
armazenar os valores menores que 50 e em outros os maiores que 50. Mostrar os vetores gerados. */
#include <stdio.h>

void GVAF(float vet[], int tam, float div);

int main(void)
{
    int i;
    int mncinq = 0, maicinq = 0;
    float VetorA[10];
    float VetorB[10];
    float VetorC[20];
    float VetorD[20];
    GVAF(VetorA, 10, 1.32);
    GVAF(VetorB, 10, 2.78);
    printf("VETOR A:\n\n");
    for (i = 0; i < 10; i++)
    {
        printf("%.2f\t", VetorA[i]);
    }
    printf("VETOR B:\n\n");
    for (i = 0; i < 10; i++)
    {
        printf("%.2f\t", VetorB[i]);
    }
    for (i = 0; i < 10; i++)
    {
        if (VetorA[i] > 50)
        {
            VetorC[maicinq] = VetorA[i];
            maicinq++;
        }
        else
        {
            VetorD[mncinq] = VetorA[i];
            mncinq++;
        }
        if (VetorB[i] > 50)
        {
            VetorC[maicinq] = VetorB[i];
            maicinq++;
        }
        else
        {
            VetorD[mncinq] = VetorB[i];
            mncinq++;
        }
    }
    printf("VETOR C:\n\n");
    for (i = 0; i < maicinq; i++)
    {
        printf("%.2f\t", VetorC[i]);
    }
    printf("\n\n");
    printf("VETOR D:\n\n");
    for (i = 0; i < mncinq; i++)
    {
        printf("%.2f\t", VetorD[i]);
    }

    return 0;
}

void GVAF(float vet[], int tam, float div)
{
    int i;
    srand(time(NULL));
    for (i = 0; i < tam; i++)
    {
        vet[i] = rand() % 101 / div;
    }
}
