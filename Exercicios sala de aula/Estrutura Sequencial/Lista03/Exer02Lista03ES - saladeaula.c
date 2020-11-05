/* 2) Considerando que para um consórcio sabe-se o número total de prestações, a quantidade
de prestações pagas e o valor de cada prestação (que é fixo). Escreva um algoritmo que
determine o valor total já pago pelo consorciado e o saldo devedor. */
#include <stdio.h>

int main(void)
{
    int totalprestacoes;
    int quantprestacoespagas;
    float valordecadaprestacao;
    float valorpago;
    float saldodevedor;
    float valortotal;

    printf("Insira o total de prestações: ");
    scanf("%d", &totalprestacoes);

    printf("Insira a quantidade de prestações pagas: ");
    scanf("%d", &quantprestacoespagas);

    printf("Insira o valor de cada prestação R$: ");
    scanf("%f", &valordecadaprestacao);

    valortotal = (float)totalprestacoes * valordecadaprestacao;
    valorpago = (float)quantprestacoespagas * valordecadaprestacao;
    saldodevedor = valortotal - valorpago;

    printf("Já foram pagos R$: %.2f de R$: %.2f\n", valorpago, valortotal);
    printf("Saldo devedor de R$: %.2f\n", saldodevedor);

    system("pause");
    return (0);
}
