/* 2) Ler um valor que representa o Preço de um produto e imprimir esse valor com reajuste
de x%. O percentual do reajuste (x) é informado pelo usuário. */
#include <stdio.h>

int main(void)
{
    float valor;
    float reajuste;
    float valorfinal;

    printf("Preço do produto em reais: ");
    scanf("%f", &valor);

    printf("Insira o reajuste ja em porcentagem: ");
    scanf("%f", &reajuste);

    valorfinal = valor * reajuste;

    printf("O novo valor do produto é de R$: %.2f", valorfinal);

    return 0;
}
