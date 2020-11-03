/* 3) Faca um programa para calcular a quantidade de caixas de ladrilhos (cerâmica,
porcelanato...) necessários para revestir um determinado cômodo de uma residência. São
informados a altura e a largura total das paredes. Também é informada a altura e largura
da porta e das janelas e a quantidade de janelas. As janelas possuem o mesmo tamanho. O
usuário informa o tamanho de um ladrilho e a quantidade de ladrilhos por caixa. Indicar a
quantidade inteira para o número de caixas necessários (arredondar o valor para o
próximo inteiro). */
#include <stdio.h>

int main(void)
{
    float largura_parede, largura_janela, largura_porta;
    float altura_parede, altura_janela, altura_porta;
    int quant_janela;
    float caixa_ladrilho;
    float tamanho_ladrilho;
    int quant_ladrilho_caixa;
    float area;
    int quant_ladrilho;
    float resultado;

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

    printf("Informe o tamanho de um ladrilho em metros quadrados: ");
    scanf("%f", &tamanho_ladrilho);

    printf("Informe a quantidade de ladrilhos por caixa: ");
    scanf("%d", &quant_ladrilho_caixa);

    area = ((altura_parede * largura_parede) - (altura_porta * largura_porta) - (quant_janela * altura_janela * largura_janela));
    quant_ladrilho = (area / tamanho_ladrilho) + 0.999999;
    caixa_ladrilho = (quant_ladrilho / quant_ladrilho_caixa) + 0.999999;

    printf("Será necessario %d ladrilhos que corresponde há %.f caixas de ladrilho!!!\n", quant_ladrilho, caixa_ladrilho);

    system("pause");
    return (0);
}
