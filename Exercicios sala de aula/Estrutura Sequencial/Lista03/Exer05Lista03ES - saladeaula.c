/* 5) Faça um programa para calcular a quantidade de fita necessária, em centímetros, para
amarrar um pacote com duas voltas, sendo uma pela largura e outra pelo comprimento do
pacote. Serão fornecidas a largura, a altura e o comprimento do pacote. Para amarrar as
pontas da fita são necessários 15 cm de fita em cada ponta. A Figura ilustra a maneira como
a fita é passada pelo pacote. */
#include <stdio.h>

int main(void)
{
    float largura;
    float altura;
    float comprimento;
    float fita;

    printf("Informe a largura do pacote (em cm): ");
    scanf("%f", &largura);

    printf("Informe a altura do pacote (em cm): ");
    scanf("%f", &altura);

    printf("Informe o comprimento do pacote (em cm): ");
    scanf("%f", &comprimento);

    fita = (altura * 4) + 2 * (comprimento + largura) + 30;

    printf("São necessarios %.f cm de fita para amarrar o pacote.\n", fita);

    system("pause");
    return (0);
}
