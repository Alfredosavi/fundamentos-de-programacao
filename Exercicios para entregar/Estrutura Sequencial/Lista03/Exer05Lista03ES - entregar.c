/* 5) Um hotel deseja fazer uma promoção especial de final de semana, concedendo um
desconto de 25% na diária. Sendo informados o número de apartamentos do hotel e o
valor da diária por apartamento para o final de semana completo. Elaborar um programa
para calcular:
 Valor promocional da diária;
 Valor total caso a ocupação no final de semana atinja 100%;
 Valor total a ser arrecadado caso a ocupação no final de semana atinja 70%;
 Valor que o hotel deixará de arrecadar em virtude da promoção, caso a ocupação
atinja 100%. */
#include <stdio.h>

int main(void)
{
    int num_apartamentos;
    float valor_diaria;
    float valorpromocionaldiaria;
    float valortotal;
    float valortotal0;

    printf("Insira o numero de apartamentos do hotel: ");
    scanf("%d", &num_apartamentos);

    printf("Insira o valor da diaria por apartamento: ");
    scanf("%f", &valor_diaria);

    valorpromocionaldiaria = valor_diaria - ((valor_diaria * 25) / 100);
    printf("Valor promocional da diaria é de R$: %.2f\n", valorpromocionaldiaria);

    valortotal0 = num_apartamentos * valor_diaria;
    printf("Valor total caso a ocupação no final de semana atinja 100%% R$: %.2f\n", valortotal);

    valortotal = num_apartamentos * valor_diaria * 0.7;
    printf("Valor total a ser arrecadado caso a ocupação no final de semana atinja 70%% R$: %.2f\n", valortotal);

    valortotal = valortotal0 - (num_apartamentos * valor_diaria - valorpromocionaldiaria);
    printf("Valor que o hotel deixará de arrecadar em virtude da promoção, caso a ocupação atinja 100%% R$: %.2f\n", valortotal);

    system("pause");
    return (0);
}
