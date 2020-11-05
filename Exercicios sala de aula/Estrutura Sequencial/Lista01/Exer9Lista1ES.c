/* 9) Um eletricista precisa comprar fio que irá passar pela diagonal de uma casa de formato
retangular. Como ele não tem condições de medir a diagonal com precisão, uma solução
alternativa é medir os lados da casa. A diagonal pode ser calculada a partir dos lados pelo
Teorema de Pitágoras (a2 = b2 + c2
). Faça um algoritmo que calcule a quantidade mínima
necessária de fio a ser comprada. Apresente também a quantidade mínima em metros
inteiros. Por exemplo: resultado do cálculo 18.35, apresentar 19 metros. */
#include <stdio.h>
#include <math.h>

int main(void)
{
    float lado1;
    float lado2;
    float hip;
    int metros;

    printf("Informe o primeiro valor do lado da casa: ");
    scanf("%f", &lado1);

    printf("Informe o segundo valor do lado da casa: ");
    scanf("%f", &lado2);

    hip = sqrt((lado1 * lado1) + (lado2 * lado2));
    metros = hip + 0.999999;

    printf("O valor da diagonal é de: %.2f\n", hip);
    printf("Voce precisa comprar %.d metros de fio\n", metros);

    system("pause");
    return 0;
}
