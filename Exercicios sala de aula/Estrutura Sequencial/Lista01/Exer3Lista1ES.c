/* 3) Um professor atribui pesos de 1 a 3 para as notas de três avaliações. Faça um
algoritmo que calcule a média ponderada. A média será um valor float e as notas valores
inteiros. */
#include <stdio.h>

int main(void)

{
    int nota_1, nota_2, nota_3;
    float media;

    printf("Informe a primeira nota: ");
    scanf("%d", &nota_1);

    printf("Informe a segunda nota: ");
    scanf("%d", &nota_2);

    printf("Informe a terceira nota: ");
    scanf("%d", &nota_3);

    media = ((nota_1 * 1) + (nota_2 * 2) + (nota_3 * 3)) / (float)6;
    printf("A media é %.2f\n", media);

    return 0;
}
