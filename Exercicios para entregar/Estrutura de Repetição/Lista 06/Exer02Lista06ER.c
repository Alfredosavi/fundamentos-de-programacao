/* 2) Escreva um algoritmo que gere (mostre) a série de Fibonacci até o termo n que é 
informado pelo usuário. Fazer a média dos termos da série que são pares.
Validar a entrada. Verificar para que no cálculo da média não seja realizada uma divisão por 
zero.
Obs. A série de Fibonacci é formada pela sequência: 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ..., etc. 
*/
#include <stdio.h>
int main(void)
{
    float media;
    int n;
    int coluna;
    char repetir;
    int i, atual, anterior, proximo;
    int qtde;
    int qtdepar;
    int soma;

    do
    {
        atual = 1, anterior = 1, qtde = 0, qtdepar = 0, soma = 0;
        do
        {
            printf("Quantos termos mostrar da serie fibonacci?: ");
            scanf("%d", &n);
        } while (n < 0);
        do
        {
            printf("Quantos numeros mostrar por coluna?: ");
            scanf("%d", &coluna);
        } while (coluna <= 0);

        if (n == 1)
        {
            printf("1\t");
            qtde = 1;
        }
        else if (n == 2)
        {
            printf("1\t1\t");
            qtde = 2;
        }
        else
        {
            qtde = 2;
            printf("1\t1\t");
            for (i = 3; i <= n; i++)
            {
                proximo = atual + anterior;
                anterior = atual;
                atual = proximo;
                printf("%d\t", proximo);
                qtde++;
                if (qtde % coluna == 0)
                {
                    printf("\n");
                }
                if (proximo % 2 == 0)
                {
                    soma = soma + proximo;
                    qtdepar++;
                }
            }
            if (qtdepar == 0)
            {
                printf("Nao foi possivel calcular a media !!!\n");
            }
            else
            {
                media = (float)soma / qtdepar;
                printf("\n\n");
                printf("A media dos pares da serie fibonacci nesse intervalo é de: %.2f", media);
            }
        }
        printf("\n");
        printf("Deseja repetir o programa ??? (S/s para sim): ");
        fflush(stdin);
        scanf("%c", &repetir);
    } while (repetir == 's' || repetir == 'S');
}
