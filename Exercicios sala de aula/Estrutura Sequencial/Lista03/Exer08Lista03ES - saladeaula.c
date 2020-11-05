/* 8) Suponha que um caixa disponha apenas de cédulas de R$ 10, 5, 2 e 1. Escreva um
programa para ler o valor de uma conta e o valor fornecido pelo usuário para pagar essa
conta, e calcule e troco. Calcular e mostrar a quantidade de cada tipo de cédula que o caixa
deve fornecer como troco e os centavos que devem ser fornecidos. Mostrar, também o valor
da compra e do troco. */
#include <stdio.h>

int main(void)
{
    double valor_conta;
    double valor_fornecido;
    double troco;
    int variavel;

    printf("Insira o valor de uma conta: ");
    scanf("%lf", &valor_conta);

    printf("Insira o valor forcecido pelo usuario: ");
    scanf("%lf", &valor_fornecido);

    printf("Valor da conta R$: %.2lf\n", valor_conta);
    printf("Valor Fornecido R$: %.2lf\n", valor_fornecido);

    troco = valor_fornecido - valor_conta;
    variavel = (int)troco / 10;
    printf("Serão necessarios %d cedulas de R$:10,00\n", variavel);

    variavel = (int)troco % 10 / 5;
    printf("Serão necessarios %d cedulas de R$:5,00\n", variavel);

    variavel = (int)troco % 10 % 5 / 2;
    printf("Serão necessarios %d cedulas de R$:2,00\n", variavel);

    variavel = (int)troco % 10 % 5 % 2;
    printf("Serão necessarios %d cedulas de R$:1,00\n", variavel);

    variavel = (troco - (int)troco) * 100;
    printf("%d Centavos\n", variavel);

    system("pause");
    return (0);
}
