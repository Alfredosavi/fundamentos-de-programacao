// 1) Apresentar os números entre 20 e 35.
#include <stdio.h>

int main(void)
{
    int i;

    for (i = 20; i <= 35; i++) // i = i + i
    {
        printf("%d\t", i);
    }

    return 0;
}
