/* 4) Utilizando as funções para verificar se um número é quadrado perfeito, triangular, retangular:
a) Indicar no intervalo de 1 a 100 quais números atendem a cada uma dessas características, da
seguinte forma
Quadrado Triangular Retangular
1
2
3
4 X        X
5
6                       X
100 X */
#include <stdio.h>

char CalculaQuadradoPerfeito(int valor);
char CalculaNumTriangular(int valor);
char CalculaNumRetangular(int valor);

int main(void)
{
    char repetir;
    int i;

    do
    {
        system("cls");
        printf("OBJETIVO: Verificar se um numero é Quadrado Perfeito, triangular\n e Retangular no intervalo 1 a 100\n\n");
        printf("NUMERO   QUADRADO   TRIANGULAR   RETANGULAR\n");
        for (i = 1; i <= 100; i++)
        {
            printf("%d         ", i);
            if (CalculaQuadradoPerfeito(i) == 's')
            {
                printf("X");
            }
            if (CalculaNumTriangular(i) == 's')
            {
                if (CalculaQuadradoPerfeito(i) == 's')
                {
                    printf("         X");
                }
                else
                {
                    printf("            X");
                }
            }
            if (CalculaNumRetangular(i) == 's')
            {
                if (CalculaQuadradoPerfeito(i) == 's' || CalculaNumTriangular(i) == 's')
                {
                    printf("                       X");
                }
                else
                {
                    printf("                            X");
                }
                if (CalculaQuadradoPerfeito(i) == 's' && CalculaNumTriangular(i) == 's')
                {
                    printf("              X");
                }
                else
                {
                    printf("       X");
                }
            }
            printf("\n");
        }
        printf("Deseja repetir o programa (S/s para sim): ");
        fflush(stdin);
        scanf("%c", &repetir);
    } while (repetir == 'S' || repetir == 's');

    return 0;
}

char CalculaQuadradoPerfeito(int valor)
{
    int i;
    int soma = 0;
    for (i = 1; i <= valor; i = i + 2)
    {
        soma = soma + i;
        if (soma == valor)
        {
            return 's';
        }
    }
    return 'n';
}

char CalculaNumTriangular(int valor)
{
    int i;
    int soma = 0;
    for (i = 2; i <= valor; i = i + 2)
    {
        soma = soma + i;
        if (soma == valor)
        {
            return 's';
        }
    }
    return 'n';
}

char CalculaNumRetangular(int valor)
{
    int i;
    int soma = 0;
    for (i = 2; i <= valor; i++)
    {
        soma = soma + i;
        if (soma == valor)
        {
            return 's';
        }
    }
    return 'n';
}
