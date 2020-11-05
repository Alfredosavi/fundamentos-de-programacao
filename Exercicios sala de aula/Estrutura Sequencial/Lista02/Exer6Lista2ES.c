/* 6) Faça um programa que leia o preço de uma mercadoria com diferença de um mês (ler
o valor da mercadoria no mês passado e no mês atual) e calcule a taxa de inflação mensal
dessa mercadoria. A inflação é o percentual da diferença de preços (atual menos o
anterior) sobre o preço anterior. */
#include <stdio.h>

int main(void)
{
    float passado;
    float agora;
    float resultado;

    printf("Informe o valor da mercadoria do mês passado: ");
    scanf("%f", &passado);

    printf("Informe o valor da mercadoria desse mês: ");
    scanf("%f", &agora);

    resultado = ((agora - passado) * 100 / passado);
    printf("A taxa de inflação mensal dessa mercadoria foi de: %2.f%%\n", resultado);

    system("pause");
    return (0);
}
