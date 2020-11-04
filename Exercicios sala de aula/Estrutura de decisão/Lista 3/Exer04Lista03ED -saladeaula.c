/* 4) Faça um programa que leia três valores representando os lados de um triângulo.
Ordene esses valores em ordem crescente. A seguir determine e mostre o tipo de
triângulo que esses lados formam de acordo com as seguintes definições. Para essas
definições a é o maior valor, b o do meio e c o menor.
Se a > b + c  valores não formam um triângulo;
Se a2 == b2+ c2 é triângulo retângulo;
Se a2> b2+ c2 é triângulo obtusângulo;
Se a2< b2+ c2 é triângulo acutângulo;
Se a == b == c é triângulo equilátero;
Se a == b e a != c, se a == c e a != b, e b == c e b != a é triângulo isósceles;
Se a != b != c é triângulo escaleno;
Observação: um mesmo triângulo pode ser classificado em mais de um tipo. Portanto,
utilizar ifs separados ao invés de ifs encadeados. */
#include <stdio.h>

int main(void)
{
    float Num1, Num2, Num3;
    float menor, maior, meio;

    printf("Informe o primeiro valor: ");
    scanf("%f", &Num1);

    printf("Informe o segundo valor: ");
    scanf("%f", &Num2);

    printf("Informe o terceiro valor: ");
    scanf("%f", &Num3);

    //menor
    if ((Num1 <= Num2) && (Num1 <= Num3))
    {
        menor = Num1;
    }
    else if (Num2 <= Num3)
    {
        menor = Num2;
    }
    else
    {
        menor = Num3;
    }

    //maior
    if ((Num1 > Num2) && (Num1 > Num3))
    {
        maior = Num1;
    }
    else if (Num2 > Num3)
    {
        maior = Num2;
    }
    else
    {
        maior = Num3;
    }

    //meio
    if ((Num1 > Num2 && Num1 < Num3) || (Num1 < Num2 && Num1 > Num3))
    {
        meio = Num1;
    }
    else if ((Num2 > Num1 && Num2 < Num3) || (Num2 < Num1 && Num2 > Num3))
    {
        meio = Num2;
    }
    else
    {
        meio = Num3;
    }
    printf("A ordem crescente é: %.f %.f %.f\n", menor, meio, maior);

    // ==============================================================================================================

    if (maior > meio + menor) // Se a > b + c valores não formam um triângulo;
    {
        printf("valores n�o formam um triângulo\n");
    }

    if (maior * maior == meio * meio + menor * menor) // Se a2 == b2+ c2 é triângulo retângulo;
    {
        printf("Triangulo Retangulo\n");
    }

    if (maior * maior > meio * meio + menor * menor) // Se a2> b2+ c2 é triângulo obtusângulo;
    {
        printf("triângulo obtusângulo\n");
    }

    if (maior * maior < menor * menor + meio * meio) // Se a2< b2+ c2 é triângulo acutângulo;
    {
        printf("triângulo acutângulo\n");
    }

    if (maior == meio == menor) // Se a == b == c é triângulo equilátero;
    {
        printf("triângulo equilátero\n");
    }

    if (maior == meio && maior != menor || maior == menor && maior != meio || meio == menor && meio != maior) // Se a == b e a != c, se a == c e a != b, e b == c e b != a � triângulo isósceles
    {
        printf("triângulo isósceles");
    }

    system("pause");
    return (0);
}
