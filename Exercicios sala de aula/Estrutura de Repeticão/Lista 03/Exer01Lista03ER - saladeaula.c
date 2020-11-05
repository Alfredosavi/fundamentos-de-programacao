/* 1) Apresente (separados por tabulação) os números entre 1 e 1000 que 
são divisíveis por 11 e  ímpares. */
#include <stdio.h>

int main(void)
{
    int i;
    printf("Numeros de 1 a 1000 divisiveis por 11 e impares:\n\n");
    for (i = 1; i < 1000; i = i + 1)
    {
        if (i % 11 == 0 && i % 2 == 1)
        {
            printf("%d\t", i);
        }
    }

    system("pause");
    return (0);
}
