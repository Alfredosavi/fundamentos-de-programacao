/* 3) Ler a quantidade de kilowatts de energia elétrica consumidos por uma residência.
Calcular e mostrar o valor em reais de cada kilowatts, o valor total a ser pago e valor a ser
pago por essa residência quando há desconto de 10%. Considere que 100 kilowatts
custam 1/7 do salário mínimo. Ler o valor do salário mínimo. */
#include <stdio.h>

int main(void)
{
    float kilowatts;
    float salariominimo;
    float valor100k;
    float valor1k;
    float valortotal;
    float valortotaldesconto;

    printf("Insira a quantidade de kilowatts de energia eletrica consumida: ");
    scanf("%f", &kilowatts);

    printf("Insira o valor do salario minimo: ");
    scanf("%f", &salariominimo);

    valor100k = salariominimo / 7;
    valor1k = (valor100k / 100);
    valortotal = kilowatts * valor1k;
    valortotaldesconto = valortotal * 0.1;

    printf("\nO valor de cada kilowatts é de R$: %.2f", valor1k);
    printf("\nValor total é de R$: %.2f", valortotal);
    printf("\nValor total com desconto de 10%% é de R$: %.2f", valortotaldesconto);

    return 0;
}
