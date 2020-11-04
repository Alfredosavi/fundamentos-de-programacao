/* 5) Implementar um programa que utilizando apenas operações de soma faça divisões com
resto, ou seja, indicar o resultado da divisão e o resto da operação. */
/*# include <stdio.h>
int main(void)
{
    int dividendo, divisor;
    int maior, menor;
    int qtde=0, i;
    int resultado;
    int um=1;

    printf("Informe o valor do dividendo: ");
    scanf("%d", &dividendo);

    printf("Informe o valor do divisor: ");
    scanf("%d", &divisor);

    if(dividendo > divisor)
    {
        maior = dividendo;
        menor = divisor;
    }

    else
    {
        maior = divisor;
        menor = dividendo;
    }

    for(i=menor ; i<maior ; i= i+1)
    {
        qtde++;
    }
    printf("%d", qtde);
} */
#include <stdio.h>

int main(void)
{
    int dividendo, divisor, quociente = 0, resto, aux, i;

    printf("informe o dividendo: ");
    scanf("%d", &dividendo);

    printf("Informe o divisor: ");
    scanf("%d", &divisor);

    resto = dividendo;

    do
    {
        aux = 0;
        if (resto >= divisor)
        {
            for (i = divisor; i < resto; i++)
            {
                aux++;
            }
            quociente++;

            resto = aux;
        }
    } while (resto >= divisor);
    printf("%d / %d = %d e resto %d\n", dividendo, divisor, quociente, resto);

    return 0;
}
