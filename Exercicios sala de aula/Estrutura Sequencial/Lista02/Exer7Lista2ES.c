/* 7) Um viajante de carro fará o trajeto entre duas cidades e ao término deseja saber:
_ Quantas vezes foi necessário abastecer;
_ Quantos litros foram consumidos para percorrer a distância indicada;
_ Quantos litros restaram no tanque após a chegada ao destino.
Faca um programa em C que leia a distância entre as duas cidades, a capacidade do
tanque e o consumo médio do veiculo, calcule e mostre as informações solicitadas. */
#include <stdio.h>

int main(void)
{
    float distancia;
    float capacidadetanque;
    float consumomedio;
    float resultado;
    float resultadolitros;
    float resultado2;

    printf("Informe a distancia entre as duas cidades (em km): ");
    scanf("%f", &distancia);

    printf("Informe a capacidade do tanque (em litros): ");
    scanf("%f", &capacidadetanque);

    printf("Informe o consumo medio do veiculo (em km/l): ");
    scanf("%f", &consumomedio);

    resultadolitros = (distancia / consumomedio) / capacidadetanque;
    printf("Foi necessario abastecer %.f vezes\n", resultadolitros);

    resultado2 = distancia / consumomedio;
    printf("Foram consumidos %.f litros de combustivel.\n", resultado2);

    resultado = capacidadetanque - resultado2;
    printf("Restaram %.f litros de combustivel no tanque.\n", resultado);

    system("pause");
    return (0);
}
