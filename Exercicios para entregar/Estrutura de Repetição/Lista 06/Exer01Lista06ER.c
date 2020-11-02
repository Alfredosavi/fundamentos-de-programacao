/* 1) Ler dois números que representam os limites de um intervalo. Os valores para os limites 
devem ser positivos. Validar as entradas, ou seja, prosseguir a leitura até que o usuário 
informe um valor positivo para ambos.
Validar cada entrada separadamente.
a) Mostrar os pares desse intervalo em ordem decrescente e em colunas. indispensável 
testar os valores informados para os limites para identificar o maior e o menor deles. 
O usuário informa a quantidade de colunas.
b) Calcular a média dos ímpares e múltiplos de 5 e não múltiplos de 10 desse intervalo. 
Validar para que não seja efetuado cálculo de divisão por zero na média. */
#include <stdio.h>

int main(void)
{
    int inferior, superior;
    char repetir;
    int colunas;
    int i;
    int maior, menor;
    int qtde;
    float media;
    int soma;

    do
    {
        system("cls");
        do
        {
            printf("Insira um numero que representa o limite inferior do intervalo: ");
            scanf("%d", &inferior);
        } while (inferior < 0);
        do
        {
            printf("Insira um numero que representa o limite superior do intervalo: ");
            scanf("%d", &superior);
        } while (superior < 0);

        do
        {
            printf("Insira um numero que representa a quantidade de colunas: ");
            scanf("%d", &colunas);
        } while (colunas <= 0);

        if (superior > inferior)
        {
            maior = superior;
            menor = inferior;
        }
        else
        {
            maior = inferior;
            menor = superior;
        }
        printf("\n      Mostrar os pares desse intervalo em ordem decrescente e em colunas:\n\n");
        qtde = 0;
        for (i = maior; i >= menor; i--)
        {
            if (i % 2 == 0)
            {
                printf("%d\t", i);
                qtde++;
                if (qtde % colunas == 0)
                {
                    printf("\n");
                }
            }
        }
        printf("\n      Calcular a media dos impares e multiplos de 5 e não multiplos de 10 desse intervalo\n\n");
        qtde = 0;
        soma = 0;
        for (i = menor; i <= maior; i++)
        {
            if (i % 2 == 1 && i % 5 == 0 && i % 10 != 0)
            {
                printf("%d\t", i);
                qtde++;
                soma = soma + i;
                if (qtde % colunas == 0)
                {
                    printf("\n");
                }
            }
        }
        if (qtde == 0)
        {
            printf("Impossivel calcular media !!!\n");
        }
        else
        {
            media = (float)soma / qtde;
            printf("\nA media dos impares e multiplos de 5 e nao multiplos de 10 do intervalo %d a %d e de: %.2f\n", menor, maior, media);
        }
        printf("\n\n");
        printf("Deseja repetir o programa ??? (s/S para sim): ");
        fflush(stdin);
        scanf("%c", &repetir);
    } while (repetir == 's' || repetir == 'S');
}
