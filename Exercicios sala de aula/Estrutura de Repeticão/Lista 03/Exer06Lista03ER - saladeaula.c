/* 6) Apresente os pares entre entre 0 e 100, sem utilizar if dentro do for. */
#include <stdio.h>

int main()
{
    int i;
    printf("Todos numeros pares entre 0 e 100:\n\n");
    for (i = 2; i <= 100; i = i + 2)
    {
        printf("%d\t", i);
    }

    system("pause");
    return (0);
}
