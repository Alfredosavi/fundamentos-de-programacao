/* 3) Escreva um algoritmo que calcule o valor da conversão para dólares de um valor lido
em reais. Primeiro calcule o valor de saída esperado. Use a seguinte tabela para o teste de
mesa */
#include <stdio.h>

int main(void)
{
    float reais;
    float resultado_dolar;
    float cotacao;

    printf("Insira o valor R$: ");
    scanf("%f", &reais);

    printf("Insira o valor da cotacao do dolar: ");
    scanf("%f", &cotacao);

    resultado_dolar = reais * cotacao;

    printf("O valor de R$: %.2f é em dolar de $: %.2f\n", reais, resultado_dolar);

    system("pause");
    return (0);
}
