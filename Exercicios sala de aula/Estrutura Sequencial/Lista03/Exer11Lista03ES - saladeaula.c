/* 11) Um motorista de táxi deseja calcular o rendimento de seu carro na praça. Escreva um
programa para ler: a marcação do odômetro (Km) no início do dia, a marcação (Km) no
final do dia, o número de litros de combustível gasto, o valor do combustível por litro e o
valor total (R$) recebido dos passageiros. Calcular e escrever: a média do consumo em
Km/L e o lucro (líquido) do dia */
#include <stdio.h>

int main(void)
{
    float km_inicial;
    float km_final;
    float litros_combustivel_gasto;
    float valor_combustivel;
    float valor_total_recebido;
    float media;
    float lucro;

    printf("Insira a marcação do odometro em km (inicial): ");
    scanf("%f", &km_inicial);

    printf("Insira a marcação do odometro em km (final: ");
    scanf("%f", &km_final);

    printf("Insira a quantidade de litros de combustivel gasto: ");
    scanf("%f", &litros_combustivel_gasto);

    printf("Insira o valor do combustivel por litro: ");
    scanf("%f", &valor_combustivel);

    printf("Insira o valor total arrecadado R$: ");
    scanf("%f", &valor_total_recebido);

    media = (km_final - km_inicial) / litros_combustivel_gasto;
    lucro = valor_total_recebido - (litros_combustivel_gasto * valor_combustivel);

    printf("A media do consumo em KM/L foi de: %.f\n", media);
    printf("O lucro liquido do dia foi de R$: %.2f\n", lucro);

    system("pause");
    return (0);
}
