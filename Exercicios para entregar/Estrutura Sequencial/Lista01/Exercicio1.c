/* 1) Uma pessoa foi ao supermercado e comprou:
M quilos de maça a um custo unitário de x;
L litros de leite a um custo unitário de y;
B pacotes de biscoito a um custo unitário de z;
Fazer um programa para ler a quantidade de cada um dos produtos comprados e o seu
valor unitário. Calcular o valor total de cada tipo de produto e o valor total da compra.
Mostrar o nome do produto, a quantidade comprada e o preço de cada produto, bem
como o valor total da compra. Atenção para declarar as variáveis do tipo adequado. */
#include <stdio.h>

int main(void)
{
    float litroleite;
    float quantlitroleite;
    float quilomaca;
    float quantquilomaca;
    float biscoito;
    int quantbiscoito;
    float totalleite;
    float totalmaca;
    float totalbiscoito;
    float total;

    printf("\nInforme o valor do litro do leite: ");
    scanf("%f", &litroleite);

    printf("\nInforme a quantidade de litros de leite: ");
    scanf("%f", &quantlitroleite);

    printf("\nInforme o valor do quilo de maca: ");
    scanf("%f", &quilomaca);

    printf("\nInforme a quantidade de quilos de maca: ");
    scanf("%f", &quantquilomaca);

    printf("\nInforme o valor do pacote de biscoito: ");
    scanf("%f", &biscoito);

    printf("\nInforme a quantidade de pacote de biscoito: ");
    scanf("%d", &quantbiscoito);

    totalleite = litroleite * quantlitroleite;
    totalmaca = quilomaca * quantquilomaca;
    totalbiscoito = biscoito * quantbiscoito;
    total = totalbiscoito + totalleite + totalmaca;

    printf("\nForam comprados %.1f quilos de maca totalizando R$: %.2f", quantquilomaca, totalmaca);
    printf("\nForam comprados %.1f litros de leite totalizando R$: %.2f", quantlitroleite, totalleite);
    printf("\nForam comprados %.1f quilos de biscoito totalizando R$: %.2f", quantbiscoito, totalbiscoito);
    printf("\nValor total da compra foi de R$: %.2f", total);

    return 0;
}
