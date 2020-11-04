// 3) Apresentar os números entre 0 e 4, com intervalo de 0.25 entre eles,
// ou seja, 0, 0.25, 0.5, 0.75 ... 4.
#include <stdio.h>

int main(void)
{
    float i;

    for (i = 0; i <= 4; i = i + 0.25)
    {
        printf("%.2f\t", i);
    }

    return 0;
}
