/* 6) Faça um algoritmo que receba o custo de um espetáculo teatral e o preço do ingresso
desse espetáculo. O programa deve calcular e mostrar:
 A quantidade de ingressos que devem ser vendidos para atingir o custo do
espetáculo.
 A quantidade de convites que devem ser vendidos para que o lucro seja de 18%. */
#include <stdio.h>

int main(void)
{
    float custoteatro;
    float precodoingresso;
    int quantingresso;
    float lucro;
    int quantingressolucro;

    printf("Insira o custo do espetaculo teatral R$: ");
    scanf("%f", &custoteatro);

    printf("Insira o preço do ingresso R$: ");
    scanf("%f", &precodoingresso);

    quantingresso = (int)(custoteatro / precodoingresso) + 0.999999;

    quantingressolucro = quantingresso * precodoingresso * 0.18 - custoteatro * 0.18;

    printf("A quantidade de ingressos que devem ser vendidos para atingir o custo do espetaculo é de: %.d\n A quantidade de convites que devem ser vendidos para que o lucro seja de 18%% � de: %.d\n", quantingresso, quantingressolucro);

    system("pause");
    return (0);

    // 100% ---------- quantidade ingresso * preço do ingresso - custo do teatro
    //  18% ---------- lucro18k
}
