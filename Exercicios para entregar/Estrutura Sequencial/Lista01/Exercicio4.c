/* 4) Uma revendedora de carros usados paga aos seus funcionários vendedores um salário
fixo por mês, mais uma comissão também fixa para cada carro vendido e mais 5% do
valor das vendas por ele efetuadas. Escrever um algoritmo que leia o número de carros
vendidos, o valor total das vendas, o salário fixo e o valor da comissão recebido por carro
vendido. Calcular e mostrar o salário mensal do vendedor. */
#include <stdio.h>

int main(void)
{
    int numerocarrovendido;
    float valortotaldasvendas;
    float salariofixo;
    float valordacomissao;
    float salariodofuncionario;

    //Entradas
    printf("Insira o numero de carros vendidos: ");
    scanf("%d", &numerocarrovendido);

    printf("Insira o valor total das vendas em reais: ");
    scanf("%f", &valortotaldasvendas);

    printf("Insira o valor do salario fixo: ");
    scanf("%f", &salariofixo);

    printf("Insira o valor da comissao recebida por cada carro vendido: ");
    scanf("%f", &valordacomissao);

    salariodofuncionario = ((valordacomissao * numerocarrovendido) + salariofixo + valortotaldasvendas);

    printf("O salario do funcionario é de R$: %.2f", salariodofuncionario);

    return 0;
}
