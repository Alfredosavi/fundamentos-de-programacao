/* 2) O custo ao consumidor de um carro novo é a soma do custo de fábrica com a
percentagem do distribuidor e a percentagem dos impostos (ambas aplicadas sobre o
custo de fábrica). Escrever um algoritmo para, a partir do custo de fábrica do carro,
calcular e mostrar o custo ao consumidor. */
#include <stdio.h>

int main(void)
{
    float custofrabrica;
    float porcdistribuidor;
    float porcimpostos;
    float custocarro;

    printf("Informe o Custo de fabrica: ");
    scanf("%f", &custofrabrica);

    printf("Informe a porcentagem do distribuidor (ex. 5 para 5%%): ");
    scanf("%f", &porcdistribuidor);

    printf("Porcentagem de impostos (ex. 5 para 5%%): ");
    scanf("%f", &porcimpostos);

    custocarro = custofrabrica + (custofrabrica * porcdistribuidor / 100) + (custofrabrica * porcimpostos / 100);
    printf("Custo ao consumidor do veiculo é de R$: %.2f\n", custocarro);

    system("pause");
    return (0);
}
