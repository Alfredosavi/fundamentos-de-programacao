/* 1) Ler dois números que representam os limites de um intervalo. Mostrar os pares e divisíveis
por três desse intervalo, em ordem decrescente e em colunas ('n' números por linha separados
por tabulação). 'n' é informado pelo usuário e deve ser validado para obter uma entrada
positiva. Calcular e mostrar a média dos ímpares e não divisíveis por 5 desse intervalo.
Validar para que não seja realizada uma divisão por zero. */
#include <stdio.h>

int main(void)
{
    int numero1;
    int numero2;
    int n;
    float media;
    char repetir;
    int i;
    int soma;
    int qtde, qtdeimp;
    do
    {
        do
        {
            printf("Informe um numero que representa o limite inferior do intervalo: ");
            scanf("%d", &numero1);
        } while (numero1 <= 0);
        do
        {
            printf("Informe um numero que representa o limite supeior do intervalo: ");
            scanf("%d", &numero2);
        } while (numero2 <= 0);
        do
        {
            printf("Informe a quantidade de numeros por linhas: ");
            scanf("%d", &n);
        } while (n < 0);

        qtde = 0;
        qtdeimp = 0;
        soma = 0;
        for (i = numero2; i >= numero1; i--)
        {
            if (i % 3 == 0 && i % 2 == 0)
            {
                printf("%d\t", i);
                qtde++;
                if (qtde % n == 0)
                {
                    printf("\n");
                }
            }
            if (i % 2 == 1 && i % 5 != 0)
            {
                soma = soma + i;
                qtdeimp++;
            }
        }
        media = soma / qtdeimp;
        printf("\n");
        printf("A media dos numeros imapares e não divisiveis por 5 é de: %.2f\n", media);
        printf("Deseja repetir o programa??? (s/S para sim): ");
        fflush(stdin);
        scanf("%c", &repetir);
    } while (repetir == 'S' || repetir == 's');

    return 0;
}
