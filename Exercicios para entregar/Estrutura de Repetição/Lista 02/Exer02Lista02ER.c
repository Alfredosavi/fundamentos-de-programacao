/* 2) Elaborar um programa para automatizar o caixa de uma loja. Leia a quantidade e o valor 
unitário de cada produto.
Calcule o valor total da compra. Informe esse valor para o usuário e o usuário informa o valor 
para pagamento.
O programa calcula o troco_int e informa-o ao usuário em notas de 10, 5, 1 e os centavos.
Prosseguir a leitura enquanto a quantidade for maior que zero. Se informado zero ou valor 
negativo para a quantidade não ler o valor unitário.
Observação: fornecer o troco_int, de 57.30, por exemplo, na forma:
	5 cédulas de 10 reais, 1 cédula de 5 reais, 2 reais e 30 centavos. */
#include <stdio.h>

int main(void)
{
    int qtde = 1;
    float valorproduto;
    float valortotalcompra;
    float valorpagamento;
    float troco, troco_cent;
    int i, variavel;

    for (i = 1; i < 2;)
    {
        if (qtde > 0)
        {
            qtde = 0;
            printf("Informe a quantidade do produto: ");
            scanf("%d", &qtde);
            printf("Informe o preco do produto R$: ");
            scanf("%f", &valorproduto);
            printf("\n");

            if (valorproduto > 0 && qtde > 0)
            {
                valortotalcompra += valorproduto * qtde;
            }
        }
        else
        {
            break;
        }
    }
    printf("Valor total da compra R$:%.2f\n", valortotalcompra);
    printf("Informe o valor do pagamento R$: ");
    scanf("%f", &valorpagamento);

    troco = valorpagamento - valortotalcompra;
    troco_cent = (troco - (int)troco) * 100;
    printf("\n\nTROCO:\n");

    printf("Troco: %.2f\n", troco);

    variavel = (int)troco / 10;
    printf("%d cedulas de R$:10,00\n", variavel);

    variavel = (int)troco % 10 / 5;
    printf("%d cedulas de R$:5,00\n", variavel);

    variavel = (int)troco % 10 % 5;
    printf("%d cedulas de R$:1,00\n", variavel);

    printf("Centavos: %.f\n", troco_cent);

    system("pause");
    return (0);
}
