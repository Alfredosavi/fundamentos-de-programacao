/* 12 Desafio) A equipe ABC deseja calcular o número mínimo de litros que deverá colocar
no tanque de seu carro para que ele possa percorrer um determinado número de voltas até o
primeiro reabastecimento. Escreva um programa que leia o comprimento da pista (em
metros), o número total de voltas a serem percorridas no grande prêmio, o número de
reabastecimentos desejados e o consumo de combustível do carro (em Km/L). Calcular e
escrever o número mínimo de litros necessários para percorrer até o primeiro
reabastecimento.
Obs.: Considere que o número de voltas entre os reabastecimentos é o mesmo. */
#include <stdio.h>

int main(void)
{
    float comprimento_pista;
    int numero_voltas;
    int numero_reabastecimento;
    float consumo_carro;
    float litros;
    float conversao;

    printf("Insira o comprimento da pista em metros: ");
    scanf("%f", &comprimento_pista);

    printf("Insira o numero de voltas a serem percorridas: ");
    scanf("%d", &numero_voltas);

    printf("Insira o numero de reabastecimentos desejados: ");
    scanf("%d", &numero_reabastecimento);

    printf("Insira o consumo de combustivel do carro em km por litro: ");
    scanf("%f", &consumo_carro);

    conversao = comprimento_pista / 1000;
    litros = ((conversao * numero_voltas) / consumo_carro);

    printf("Será necessario colocar %.2f litros de combustivel\n", litros);

    system("pause");
    return (0);
}
