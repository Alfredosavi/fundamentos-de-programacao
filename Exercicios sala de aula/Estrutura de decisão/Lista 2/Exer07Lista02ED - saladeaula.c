/* 7) Ler três valores que representam os lados de um triângulo e determinar se esses 
valores podem formar um triângulo.
Para formar um triângulo é necessário que a soma de dois lados quaisquer seja maior 
(ou igual, no caso de triângulo com área zero) ao valor do outro lado. */
#include <stdio.h>

int main(void)
{
    float ladoA;
    float ladoB;
    float ladoC;

    printf("Informe o primeiro valor: ");
    scanf("%f", &ladoA);

    printf("Informe o segundo valor: ");
    scanf("%f", &ladoB);

    printf("Informe o terceiro valor: ");
    scanf("%f", &ladoC);

    if (ladoA + ladoB >= ladoC && ladoA + ladoC >= ladoB && ladoB + ladoC >= ladoA)
    {
        printf("Esses valores podem formar um Triangulo !!!\n");
    }

    else
    {
        printf("Esses valores não formam um triangulo !!!\n");
    }

    system("pause");
    return (0);
}
