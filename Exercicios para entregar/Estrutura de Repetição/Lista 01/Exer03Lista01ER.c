/* 3) Mostrar os números entre 10 e 0 (ordem decrescente) com intervalo de 0.5. */
#include <stdio.h>

int main(void)
{
    float i;

    printf("Numeros entre 10 e 0 com intervalo de 0.5:\n\n");

    for (i = 10; i >= 0; i = i - 0.5)
    {
        printf("%.1f\t", i);
    }
    printf("\n\n");
    system("pause");
    return (0);
}
