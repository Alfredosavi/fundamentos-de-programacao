/* 5) Escreva um algoritmo para ler o número de votos brancos, nulos (incluem eleitores
ausentes) e válidos de uma eleição. Calcular e mostrar o percentual que cada um
(brancos, nulos e válidos) representa em relação ao total de eleitores. Lembrar que os
valores dos percentuais podem não ser inteiros. */
#include <stdio.h>

int main(void)
{
    int brancos;
    int nulos;
    int validos;
    float percentual;
    int total;

    printf("Insira o valor de votos brancos: ");
    scanf("%d", &brancos);

    printf("Insira o valor de votos ausentes e nulos: ");
    scanf("%d", &nulos);

    printf("Insira o valor de votos validos da eleição: ");
    scanf("%d", &validos);

    total = brancos + nulos + validos;

    percentual = ((float)brancos / total) * 100;
    printf("Percentual de votos brancos foi de: %.2f%%\n", percentual);

    percentual = ((float)nulos / total) * 100;
    printf("Percentual de votos nulos foi de: %.2f%%\n", percentual);

    percentual = ((float)validos / total) * 100;
    printf("Percentual de votos validos foi de: %.2f%%\n", percentual);

    system("pause");
    return (0);
}
