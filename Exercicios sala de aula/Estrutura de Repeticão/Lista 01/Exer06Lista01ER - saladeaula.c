/* 6) Ler dois números que representam os limites de um intervalo e ler o incremento.
Mostrar os números desse intervalo de acordo com o incremento indicado e em ordem crescente.
O usuário pode informar os valores que representam os limites do intervalo em ordem crescente ou 
decrescente. */
#include <stdio.h>

int main(void)
{
    int limiteinf, limitesup;
    int i;
    int incremento;

    printf("Informe o limite inferior: ");
    scanf("%d", &limiteinf);

    printf("Informe o limite superior: ");
    scanf("%d", &limitesup);

    printf("Informe o incremento: ");
    scanf("%d", &incremento);

    if (limitesup < limiteinf)
    {
        i = limitesup;
        limitesup = limiteinf;
        limiteinf = i;
    }

    for (i = limiteinf; i <= limitesup; i = i + incremento)
    {
        printf("%5d", i);
    }

    return 0;
}
