/* 5) Ler números inteiros. Prosseguir a leitura até ser informado o valor zero que não deve ser 
considerados nos cálculos. Informar:
a) Quantos valores positivos formam informados;
b) Quantos valores negativos e pares foram informados;
c) A média dos valores divisíveis por 3 informados. Validar para não fazer divisão por zero 
no cálculo da média. */
#include <stdio.h>

int main(void)
{
    int numeros = 1;
    int i;
    int qtdepositivo = 0;
    int qtdenegativapar = 0;
    float media, somatodos;
    int qtdemedia = 0;

    for (i = 1; i < 2;)
    {
        if (numeros != 0)
        {
            printf("Informe um numero inteiro: ");
            scanf("%d", &numeros);

            if (numeros > 0 || numeros < 0)
            {
                if (numeros > 0)
                {
                    qtdepositivo++;
                }

                if (numeros < 0 && numeros % 2 == 0)
                {
                    qtdenegativapar++;
                }

                if (numeros % 3 == 0)
                {
                    somatodos += numeros;
                    qtdemedia++;
                }
            }
        }

        else
        {
            break;
        }
    }
    printf("\n");
    if (qtdemedia != 0)
    {
        media = (float)somatodos / (float)qtdemedia;
        printf("A media dos valores divisiveis por 3 informados: %.2f\n", media);
    }

    else
    {
        printf("Nao foi possivel calcular a media!!!\n");
    }

    printf("Quantidade de valores positivos informados: %d\n", qtdepositivo);
    printf("Quantidade de valores negativos e pares informados: %d\n", qtdenegativapar);

    system("pause");
    return (0);
}
