/* 3) Apresentar o quadrado dos números divisíveis por 3 e a raiz quadrada dos números positivos e 
divisíveis por 5 ou por 7 entre 0 a 100.
Apresentar em listagens separadas: uma para os quadrados e outra para as raízes quadradas. 
Colocar um cabeçalho antes de cada listagem de maneira a identificar o conteúdo da mesma.
Em cada listagem separar os números por uma tabulação. A raiz quadrada pode ser obtida pela função 
sqrt () que está na biblioteca <math.h> */
#include <stdio.h>
#include <math.h>

int main(void)
{
    int i;
    int resultado;

    for (i = 0; i < 101; i = i + 1)
    {
        if (i % 3 == 0)
        {
            printf("Quadrados %d", i);
            resultado = i * i;
            printf("\t%d\n", resultado);
        }
    }

    printf("\n\n");
    for (i = 0; i < 101; i = i + 1)
    {
        if (i % 5 == 0 && i > 0 || i % 7 == 0 && i > 0)
        {
            resultado = sqrt(i);
            printf("Raiz Quadrada %d", i);
            printf("\t%d\n", resultado);
        }
    }

    system("pause");
    return (0);
}
