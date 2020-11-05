/* 10) Qual o objetivo do algoritmo representado no trecho de código a seguir. */
#include <stdio.h>

int main(void)
{
    int Num;

    do
    {
        printf("Informe um número entre 1 e 50: ");
        scanf("%d", &Num);
        if ((Num < 1) || (Num > 50))
        {
            printf("valor informado fora da faixa.\n");
        }
    } while ((Num < 1) || (Num > 50));

    while ((Num * 2) < 250)
    {
        Num = Num * 2;
        printf("%d\n", Num);
    }

    return 0;
}

// pegar o numero que esta entre 1 e 50 e o resultado é a soma do dobro do resultado anterior...
