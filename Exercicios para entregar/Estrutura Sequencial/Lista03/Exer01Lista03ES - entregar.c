/* 1) Faça um algoritmo que calcule as raízes de ax²+bx+c. Suponha que o valor de delta
será sempre positivo. */
#include <stdio.h>
#include <math.h>

int main(void)
{
    float coefA;
    float coefB;
    float coefC;
    float delta;
    float x1;
    float x2;

    printf("Equação do 2 grau: Ax^2 + Bx + C ...\n Sabendo disso preencha:\n");

    printf("Insira o valor do coeficiente A: ");
    scanf("%f", &coefA);

    printf("Insira o valor do coeficiente B: ");
    scanf("%f", &coefB);

    printf("Insira o valor do coeficiente C: ");
    scanf("%f", &coefC);

    delta = (coefB * coefB) - (4 * coefA * coefC);
    x1 = (-coefB + sqrt(delta)) / 2 * coefA;
    x2 = (-coefB - sqrt(delta)) / 2 * coefA;

    printf("As raizes da equação são: %.f e %.f\n", x1, x2);

    system("pause");
    return (0);
}
