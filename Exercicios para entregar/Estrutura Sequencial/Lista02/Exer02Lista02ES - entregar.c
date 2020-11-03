/* 2) Faca um programa para calcular a quantidade necessária de latas de tinta para pintar
uma parede com X metros de largura por H metros de altura. Também é informada a
altura e largura da porta e das janelas e a quantidade de janelas. As janelas possuem o
mesmo tamanho. O usuário informa o consumo de tinta por metro quadrado e a
quantidade de litros de tinta de uma lata. Indicar a quantidade inteira para o número de
latas de tinta necessário (arredondar o valor para o próximo inteiro). */
#include <stdio.h>

int main(void)
{
    float largura_parede, largura_janela, largura_porta;
    float altura_parede, altura_janela, altura_porta;
    int quant_janela;
    int latas_tinta;
    float consumo_tinta_metro_quadrado;
    float quant_litros_tinta_uma_lata;
    float area;
    float litros_tinta;

    printf("Informe a largura da parede em metros: ");
    scanf("%f", &largura_parede);

    printf("Informe a altura da parede em metros: ");
    scanf("%f", &altura_parede);

    printf("Informe a largura da porta em metros: ");
    scanf("%f", &largura_porta);

    printf("Informe a altura da porta em metros: ");
    scanf("%f", &altura_porta);

    printf("Informe a largura da janela em metros: ");
    scanf("%f", &largura_janela);

    printf("Informe a altura da janela em metros: ");
    scanf("%f", &altura_janela);

    printf("Informe a quantidade de janelas: ");
    scanf("%d", &quant_janela);

    printf("Informe o consumo de tinta por metro quadrado: ");
    scanf("%f", &consumo_tinta_metro_quadrado);

    printf("Informe a quantidade de litros de tinta de uma lata: ");
    scanf("%f", &quant_litros_tinta_uma_lata);

    area = ((altura_parede * largura_parede) - (altura_porta * largura_porta) - (quant_janela * altura_janela * largura_janela));
    litros_tinta = consumo_tinta_metro_quadrado * area;
    latas_tinta = (litros_tinta / quant_litros_tinta_uma_lata) + 0.999999;

    printf("Para pintar uma area de %.2f metros quadrados, será necessario %d latas de tinta\n", area, latas_tinta);

    system("pause");
    return (0);
}
