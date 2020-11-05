/* 3) Leia um valor float que representa o troco a ser fornecido por um caixa. Separe a parte
inteira (reais) da parte decimal (centavos) e apresente na forma: 123 reais e 18 centavos. */
#include <stdio.h>

int main(void)
{
    float valorfloat;
    int variavel;
    int variavel2;

    printf("Insira o valor float: ");
    scanf("%f", &valorfloat);

    variavel = (int)valorfloat;
    variavel2 = (valorfloat - variavel) * 100;

    printf("%d reais e %d centavos\n", variavel, variavel2);

    system("pause");
    return (0);
}
